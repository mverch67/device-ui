#pragma once

#include "ILog.h"
#include "LovyanGFX.h"
#include "TFTDriver.h"
#include <functional>

template <class LGFX> class LGFXDriver : public TFTDriver<LGFX>
{
  public:
    LGFXDriver(uint16_t width, uint16_t height);
    virtual void init(void);
    virtual bool hasTouch() { return TFTDriver<LGFX>::tft->touch(); }

  protected:
    // lvgl callbacks have to be static cause it's a C library, not C++
    static void display_flush(lv_disp_drv_t *disp, const lv_area_t *area, lv_color_t *color_p);
    static void touchpad_read(lv_indev_drv_t *indev_driver, lv_indev_data_t *data);

  private:
    void init_lgfx(void);

    static LGFX *lgfx;
};

template <class LGFX> LGFX *LGFXDriver<LGFX>::lgfx = nullptr;

template <class LGFX>
LGFXDriver<LGFX>::LGFXDriver(uint16_t width, uint16_t height) : TFTDriver<LGFX>(lgfx ? lgfx : new LGFX, width, height)
{
    lgfx = this->tft;
}

template <class LGFX> void LGFXDriver<LGFX>::display_flush(lv_disp_drv_t *disp, const lv_area_t *area, lv_color_t *color_p)
{
    uint32_t w = (area->x2 - area->x1 + 1);
    uint32_t h = (area->y2 - area->y1 + 1);
    lgfx->startWrite();
    lgfx->setAddrWindow(area->x1, area->y1, w, h);
    lgfx->writePixels((lgfx::rgb565_t *)&color_p->full, w * h);
    lgfx->endWrite();
    lv_disp_flush_ready(disp); // TODO put into LGFX callback for DMA
}

#if 0
/* Display flushing not using DMA */
template <class LGFX>
void LGFXDriver<LGFX>::display_flush(lv_disp_drv_t *disp, const lv_area_t *area, lv_color_t *color_p) {
    uint32_t w = (area->x2 - area->x1 + 1);
    uint32_t h = (area->y2 - area->y1 + 1);
    lgfx->startWrite();
    lgfx->setAddrWindow(area->x1, area->y1, w, h);
    lgfx->writePixels((lgfx::rgb565_t *)&color_p->full, w * h);
    lgfx->endWrite();
    lv_disp_flush_ready(disp); //TODO put into LGFX callback for DMA
}


/* Display flushing using DMA */
void my_disp_flush( lv_disp_drv_t *disp, const lv_area_t *area, lv_color_t *color_p )
{
    if (gfx.getStartCount() == 0)
    {   // Processing if not yet started
        gfx.startWrite();
    }
    gfx.pushImageDMA( area->x1
                    , area->y1
                    , area->x2 - area->x1 + 1
                    , area->y2 - area->y1 + 1
                    , ( lgfx::swap565_t* )&color_p->full);
    lv_disp_flush_ready( disp );
}

#endif

template <class LGFX> void LGFXDriver<LGFX>::touchpad_read(lv_indev_drv_t *indev_driver, lv_indev_data_t *data)
{
    uint16_t touchX, touchY;
    bool touched = lgfx->getTouch(&touchX, &touchY);
    if (!touched) {
        data->state = LV_INDEV_STATE_REL;
    } else {
        data->state = LV_INDEV_STATE_PR;
        data->point.x = (int16_t)touchX;
        data->point.y = (int16_t)touchY;
#if 0
        if (data->point.x < 0)
            data->point.x = 0;
        if (data->point.y < 0)
            data->point.y = 0;
        if (data->point.x >= LV_HOR_RES)
            data->point.x = LV_HOR_RES - 1;
        if (data->point.y >= LV_VER_RES)
            data->point.y = LV_VER_RES - 1;
#endif
    }
}

template <class LGFX> void LGFXDriver<LGFX>::init(void)
{
    ILOG_DEBUG("LGFXDriver<LGFX>::init...\n");
    init_lgfx();
    TFTDriver<LGFX>::init();

    // LVGL: setup display device driver
    ILOG_DEBUG("LVGL display driver init...\n");
    static lv_disp_drv_t disp_drv;
    lv_disp_drv_init(&disp_drv);
    disp_drv.hor_res = this->screenWidth;
    disp_drv.ver_res = this->screenHeight;
    disp_drv.flush_cb = &LGFXDriver::display_flush;
    disp_drv.draw_buf = DisplayDriver::lvgl.get_draw_buf();
#ifdef BOARD_HAS_PSRAM
    // disp_drv.full_refresh = 1; //needs allocate entire draw_buf width*height in
    // PSRAM
#endif

    lv_disp_drv_register(&disp_drv);

    if (hasTouch()) {
        // LVGL: setup input device driver
        ILOG_DEBUG("LVGL input driver init...\n");
        static lv_indev_drv_t indev_drv;
        lv_indev_drv_init(&indev_drv);
        indev_drv.type = LV_INDEV_TYPE_POINTER;
        indev_drv.read_cb = &touchpad_read;
        lv_indev_drv_register(&indev_drv);
    }
}

template <class LGFX> void LGFXDriver<LGFX>::init_lgfx(void)
{
    // Initialize LovyanGFX
    ILOG_DEBUG("LGFX init...\n");
    TFTDriver<LGFX>::tft->init();
    TFTDriver<LGFX>::tft->setBrightness(128);
    TFTDriver<LGFX>::tft->fillScreen(LGFX::color565(0x3D, 0xDA, 0x83));

#ifdef CALIBRATE_TOUCH
    ILOG_INFO("Calibrating touch...\n");
#ifdef T_DECK
    // FIXME: read from store using lfs_file_read
    //uint16_t parameters[8] = {3, 13, 1, 316, 227, 19, 231, 311}; 
    uint16_t parameters[8] = {11, 19, 6, 314, 218, 15, 229, 313}; 
#elif defined(ESP32_2432S028R)
    uint16_t parameters[8] = {255, 3691, 203, 198, 3836, 3659, 3795, 162};
#else
    uint16_t parameters[8] = {0, 0, 0, 0, 0, 0, 0, 0};
#endif

#if !CALIBRATE_TOUCH
    TFTDriver<LGFX>::tft->setTouchCalibrate(parameters);
#else
    TFTDriver<LGFX>::tft->setTextSize(2);
    TFTDriver<LGFX>::tft->setTextDatum(textdatum_t::middle_center);
    TFTDriver<LGFX>::tft->drawString("touch the arrow marker.", TFTDriver<LGFX>::tft->width() >> 1, TFTDriver<LGFX>::tft->height() >> 1);
    TFTDriver<LGFX>::tft->setTextDatum(textdatum_t::top_left);
    std::uint16_t fg = TFT_BLUE;
    std::uint16_t bg = LGFX::color565(0x40, 0xFF, 0x72);
    if (TFTDriver<LGFX>::tft->isEPD())
        std::swap(fg, bg);
    TFTDriver<LGFX>::tft->calibrateTouch(parameters, fg, bg, std::max(TFTDriver<LGFX>::tft->width(), TFTDriver<LGFX>::tft->height()) >> 3);

    // FIXME: store parameters[] using lfs_file_write
    ILOG_DEBUG("Touchscreen calibration parameters: %d, %d, %d, %d, %d, %d, %d, %d\n", parameters[0], parameters[1],
               parameters[2], parameters[3], parameters[4], parameters[5], parameters[6], parameters[7]);
#endif
#endif
}
