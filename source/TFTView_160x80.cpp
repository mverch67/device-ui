#ifdef VIEW_160x80

#include "TFTView_160x80.h"
#include <cstdio>
#include <ctime>
#include <functional>
#include "Arduino.h"
#include "ui.h" // this is the ui generated by lvgl / squareline editor

#ifdef USE_X11
#include "X11Driver.h"
#elif defined (LGFX_DRIVER_INC)
#include "LGFXDriver.h"
#include LGFX_DRIVER_INC
#else
#error "Unknown device for view 160x80"
#endif


TFTView_160x80* TFTView_160x80::gui = nullptr;

TFTView_160x80* TFTView_160x80::instance(void) {
    if (!gui) gui = new TFTView_160x80;
    return gui;
}

#ifdef USE_X11
TFTView_160x80::TFTView_160x80() : DeviceGUI(&X11Driver::create(), new ViewController) {
}
#else
TFTView_160x80::TFTView_160x80() : DeviceGUI(new LGFXDriver<LGFX_DRIVER>(screenWidth, screenHeight), 
                                             new ViewController) {
}
#endif

void TFTView_160x80::init(IClientBase* client) {
    Serial.println("TFTView init...");
    displaydriver->init();
    DeviceGUI::init(client);
}

#endif