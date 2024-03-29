// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.3.4
// LVGL version: 8.3.6
// Project name: T_Watch_Meshtastic

#include "../ui.h"

void ui_ClockScreen_screen_init(void)
{
    ui_ClockScreen = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_ClockScreen, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_ClockScreen, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_ClockScreen, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_ButtonPanel6 = lv_obj_create(ui_ClockScreen);
    lv_obj_set_width(ui_ButtonPanel6, 240);
    lv_obj_set_height(ui_ButtonPanel6, 240);
    lv_obj_set_align(ui_ButtonPanel6, LV_ALIGN_CENTER);
    lv_obj_set_flex_flow(ui_ButtonPanel6, LV_FLEX_FLOW_ROW_WRAP);
    lv_obj_set_flex_align(ui_ButtonPanel6, LV_FLEX_ALIGN_START, LV_FLEX_ALIGN_START, LV_FLEX_ALIGN_START);
    lv_obj_clear_flag(ui_ButtonPanel6, LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_MOMENTUM |
                      LV_OBJ_FLAG_SCROLL_CHAIN);     /// Flags
    lv_obj_set_style_radius(ui_ButtonPanel6, 20, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_ButtonPanel6, lv_color_hex(0x303030), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_ButtonPanel6, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_ButtonPanel6, lv_color_hex(0x67EA94), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_ButtonPanel6, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_ButtonPanel6, 3, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_ButtonPanel6, 12, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_ButtonPanel6, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_ButtonPanel6, 4, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_ButtonPanel6, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui_ButtonPanel6, lv_color_hex(0xAAFBFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_ButtonPanel6, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_ButtonPanel6, &lv_font_montserrat_16, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_add_event_cb(ui_ClockScreen, ui_event_ClockScreen, LV_EVENT_ALL, NULL);

}
