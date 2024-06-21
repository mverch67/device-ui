
#if defined(LV_LVGL_H_INCLUDE_SIMPLE)
#include "lvgl.h"
#elif defined(LV_BUILD_TEST)
#include "../lvgl.h"
#else
#include "lvgl/lvgl.h"
#endif


#ifndef LV_ATTRIBUTE_MEM_ALIGN
#define LV_ATTRIBUTE_MEM_ALIGN
#endif

#ifndef LV_ATTRIBUTE_IMG_DUST
#define LV_ATTRIBUTE_IMG_DUST
#endif

static const
LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_LARGE_CONST LV_ATTRIBUTE_IMG_DUST
uint8_t img_mqtt_logo_image_map[] = {

    0x86,0x31,0xcb,0x5a,0xae,0x73,0xae,0x73,0xae,0x73,0xae,0x73,0xae,0x73,0xae,0x73,0xae,0x73,0xae,0x73,0xae,0x73,0x0c,0x63,0xc7,0x39,0x65,0x29,0x65,0x29,0x86,0x31,0x86,0x31,0x86,0x31,0x86,0x31,0x65,0x29,0xc7,0x39,0x4d,0x6b,0xcf,0x7b,0xae,0x73,0xae,0x73,0xae,0x73,0xae,0x73,0xae,0x73,0xeb,0x5a,0x86,0x31,
    0xcb,0x5a,0x79,0xce,0xfb,0xde,0xfb,0xde,0xfb,0xde,0xfb,0xde,0xfb,0xde,0xfb,0xde,0xfb,0xde,0xfb,0xde,0xfb,0xde,0xba,0xd6,0x96,0xb5,0xae,0x73,0xe7,0x39,0x65,0x29,0x65,0x29,0x86,0x31,0x86,0x31,0x86,0x31,0x86,0x31,0x2c,0x63,0x18,0xc6,0x1c,0xe7,0xfb,0xde,0xfb,0xde,0xfb,0xde,0xfb,0xde,0x79,0xce,0xeb,0x5a,
    0xcf,0x7b,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0xf7,0xbd,0xae,0x73,0xc7,0x39,0x65,0x29,0x86,0x31,0x86,0x31,0x86,0x31,0x65,0x29,0x69,0x4a,0x75,0xad,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0xcf,0x7b,
    0xaa,0x52,0x51,0x8c,0xb2,0x94,0x14,0xa5,0xb6,0xb5,0x59,0xce,0xdb,0xde,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0x96,0xb5,0xeb,0x5a,0x86,0x31,0x65,0x29,0x86,0x31,0x86,0x31,0x65,0x29,0xe7,0x39,0xf3,0x9c,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0xcf,0x7b,
    0x65,0x29,0x65,0x29,0x65,0x29,0x86,0x31,0xa6,0x31,0x08,0x42,0xcb,0x5a,0xf0,0x83,0x55,0xad,0x9a,0xd6,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x9a,0xd6,0x31,0x8c,0xc7,0x39,0x65,0x29,0x86,0x31,0x86,0x31,0x65,0x29,0xc7,0x39,0xb2,0x94,0xfb,0xde,0x1c,0xe7,0xfb,0xde,0xcf,0x7b,
    0x86,0x31,0x86,0x31,0x86,0x31,0x86,0x31,0x86,0x31,0x65,0x29,0x65,0x29,0x65,0x29,0xa6,0x31,0x69,0x4a,0x30,0x84,0xf7,0xbd,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x55,0xad,0x49,0x4a,0x65,0x29,0x86,0x31,0x86,0x31,0x65,0x29,0xc7,0x39,0xd3,0x9c,0x1c,0xe7,0xfb,0xde,0xcf,0x7b,
    0x65,0x29,0x65,0x29,0x65,0x29,0x65,0x29,0x86,0x31,0x86,0x31,0x86,0x31,0x86,0x31,0x86,0x31,0x65,0x29,0x65,0x29,0x08,0x42,0xcf,0x7b,0x18,0xc6,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0xf7,0xbd,0xcb,0x5a,0x65,0x29,0x86,0x31,0x86,0x31,0x65,0x29,0xe7,0x39,0x34,0xa5,0x1c,0xe7,0xcf,0x7b,
    0xe7,0x39,0x69,0x4a,0x49,0x4a,0xe7,0x39,0xa6,0x31,0x65,0x29,0x65,0x29,0x65,0x29,0x86,0x31,0x86,0x31,0x86,0x31,0x65,0x29,0x65,0x29,0x28,0x42,0x71,0x8c,0xba,0xd6,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x39,0xce,0xeb,0x5a,0x65,0x29,0x86,0x31,0x86,0x31,0x65,0x29,0x28,0x42,0xd7,0xbd,0xcf,0x7b,
    0x8e,0x73,0x9a,0xd6,0x79,0xce,0x18,0xc6,0x96,0xb5,0x92,0x94,0x6d,0x6b,0x29,0x4a,0x86,0x31,0x65,0x29,0x65,0x29,0x86,0x31,0x86,0x31,0x65,0x29,0x86,0x31,0x0c,0x63,0xf7,0xbd,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x59,0xce,0xcb,0x5a,0x65,0x29,0x86,0x31,0x86,0x31,0x65,0x29,0xcb,0x5a,0x2c,0x63,
    0xae,0x73,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0x59,0xce,0xf3,0x9c,0x0c,0x63,0xa7,0x39,0x65,0x29,0x86,0x31,0x86,0x31,0x86,0x31,0x65,0x29,0x28,0x42,0x34,0xa5,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x18,0xc6,0x8a,0x52,0x65,0x29,0x86,0x31,0x86,0x31,0x86,0x31,0xa6,0x31,
    0xae,0x73,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0xdb,0xde,0x75,0xad,0x0c,0x63,0x86,0x31,0x65,0x29,0x86,0x31,0x86,0x31,0x65,0x29,0xc7,0x39,0xd3,0x9c,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0xb6,0xb5,0x08,0x42,0x65,0x29,0x86,0x31,0x86,0x31,0x86,0x31,
    0xcf,0x7b,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0xba,0xd6,0xd3,0x9c,0x28,0x42,0x65,0x29,0x86,0x31,0x86,0x31,0x65,0x29,0xc7,0x39,0xb2,0x94,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0xd3,0x9c,0xa6,0x31,0x86,0x31,0x86,0x31,0x86,0x31,
    0xaa,0x52,0x92,0x94,0x14,0xa5,0xb6,0xb5,0x79,0xce,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0xf7,0xbd,0xeb,0x5a,0x65,0x29,0x86,0x31,0x86,0x31,0x65,0x29,0xc7,0x39,0x14,0xa5,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0xdb,0xde,0x8e,0x73,0x65,0x29,0x86,0x31,0x86,0x31,
    0x65,0x29,0x65,0x29,0x86,0x31,0xa6,0x31,0x49,0x4a,0x4d,0x6b,0xd3,0x9c,0x79,0xce,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x79,0xce,0x6d,0x6b,0x86,0x31,0x86,0x31,0x86,0x31,0x65,0x29,0x08,0x42,0xb6,0xb5,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x18,0xc6,0x29,0x4a,0x65,0x29,0x86,0x31,
    0x86,0x31,0x86,0x31,0x86,0x31,0x86,0x31,0x65,0x29,0x65,0x29,0x86,0x31,0x49,0x4a,0x71,0x8c,0x79,0xce,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0xba,0xd6,0x6e,0x73,0x65,0x29,0x86,0x31,0x86,0x31,0x65,0x29,0xcb,0x5a,0x79,0xce,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x92,0x94,0x86,0x31,0x86,0x31,
    0x65,0x29,0x65,0x29,0x65,0x29,0x86,0x31,0x86,0x31,0x86,0x31,0x86,0x31,0x65,0x29,0x65,0x29,0xaa,0x52,0x55,0xad,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x9a,0xd6,0x2c,0x63,0x65,0x29,0x86,0x31,0x86,0x31,0x65,0x29,0x10,0x84,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x9a,0xd6,0x8a,0x52,0x65,0x29,
    0xc7,0x39,0x49,0x4a,0xe7,0x39,0xa6,0x31,0x65,0x29,0x65,0x29,0x86,0x31,0x86,0x31,0x86,0x31,0x65,0x29,0xc7,0x39,0x71,0x8c,0xdb,0xde,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x38,0xc6,0x69,0x4a,0x65,0x29,0x86,0x31,0x65,0x29,0xe7,0x39,0xb6,0xb5,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0xb2,0x94,0x86,0x31,
    0x8e,0x73,0x79,0xce,0x18,0xc6,0x55,0xad,0x10,0x84,0x8a,0x52,0x86,0x31,0x65,0x29,0x86,0x31,0x86,0x31,0x65,0x29,0x86,0x31,0x10,0x84,0xdb,0xde,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x55,0xad,0xc7,0x39,0x65,0x29,0x86,0x31,0x65,0x29,0x4d,0x6b,0xdb,0xde,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x79,0xce,0x8a,0x52,
    0xaf,0x7b,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x9a,0xd6,0xd3,0x9c,0x69,0x4a,0x65,0x29,0x86,0x31,0x86,0x31,0x65,0x29,0x86,0x31,0x51,0x8c,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0xae,0x73,0x65,0x29,0x86,0x31,0x65,0x29,0xa7,0x39,0x75,0xad,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0xae,0x73,
    0xae,0x73,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x59,0xce,0x8e,0x73,0x86,0x31,0x65,0x29,0x86,0x31,0x65,0x29,0xc7,0x39,0x34,0xa5,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x18,0xc6,0x08,0x42,0x65,0x29,0x86,0x31,0x65,0x29,0x6d,0x6b,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0xae,0x73,
    0xae,0x73,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0xdb,0xde,0x10,0x84,0x86,0x31,0x65,0x29,0x86,0x31,0x65,0x29,0x69,0x4a,0x59,0xce,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0xef,0x7b,0x65,0x29,0x86,0x31,0x65,0x29,0x08,0x42,0x18,0xc6,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0xae,0x73,
    0xae,0x73,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0xdb,0xde,0xcf,0x7b,0x86,0x31,0x86,0x31,0x86,0x31,0x65,0x29,0x10,0x84,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0xd7,0xbd,0xe7,0x39,0x65,0x29,0x86,0x31,0x65,0x29,0xb2,0x94,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0xae,0x73,
    0xae,0x73,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x9a,0xd6,0xcb,0x5a,0x65,0x29,0x86,0x31,0x65,0x29,0x08,0x42,0x18,0xc6,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0xdb,0xde,0x0c,0x63,0x65,0x29,0x86,0x31,0x65,0x29,0x2c,0x63,0xfb,0xde,0x1c,0xe7,0xfb,0xde,0xae,0x73,
    0xae,0x73,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x75,0xad,0xc7,0x39,0x65,0x29,0x86,0x31,0x65,0x29,0x71,0x8c,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x92,0x94,0x65,0x29,0x86,0x31,0x65,0x29,0x28,0x42,0x59,0xce,0x1c,0xe7,0xfb,0xde,0xae,0x73,
    0xae,0x73,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0xdb,0xde,0x2c,0x63,0x65,0x29,0x86,0x31,0x65,0x29,0xcb,0x5a,0xbb,0xde,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0xb6,0xb5,0xc7,0x39,0x65,0x29,0x86,0x31,0xa6,0x31,0x96,0xb5,0x1c,0xe7,0xfb,0xde,0xae,0x73,
    0xae,0x73,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0xf3,0x9c,0x86,0x31,0x86,0x31,0x65,0x29,0xe7,0x39,0x18,0xc6,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x79,0xce,0x49,0x4a,0x65,0x29,0x86,0x31,0x86,0x31,0xd3,0x9c,0x1c,0xe7,0xfb,0xde,0xae,0x73,
    0xae,0x73,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x38,0xc6,0x08,0x42,0x65,0x29,0x86,0x31,0x86,0x31,0x34,0xa5,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0xdb,0xde,0xeb,0x5a,0x65,0x29,0x86,0x31,0x65,0x29,0x30,0x84,0x1c,0xe7,0xfb,0xde,0xae,0x73,
    0xae,0x73,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0xba,0xd6,0xaa,0x52,0x65,0x29,0x86,0x31,0x65,0x29,0x71,0x8c,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0x6d,0x6b,0x65,0x29,0x86,0x31,0x65,0x29,0xae,0x73,0x1c,0xe7,0xfb,0xde,0xae,0x73,
    0xcb,0x5a,0x79,0xce,0xfb,0xde,0xfb,0xde,0xfb,0xde,0xfb,0xde,0xfb,0xde,0xfb,0xde,0xfb,0xde,0xfb,0xde,0xfb,0xde,0xfb,0xde,0xdb,0xde,0x2c,0x63,0x65,0x29,0x86,0x31,0x65,0x29,0xf0,0x83,0x1c,0xe7,0xfb,0xde,0xfb,0xde,0xfb,0xde,0xae,0x73,0x65,0x29,0x86,0x31,0x65,0x29,0x6d,0x6b,0xfb,0xde,0x79,0xce,0xcb,0x5a,
    0x86,0x31,0xeb,0x5a,0xcf,0x7b,0xcf,0x7b,0xcf,0x7b,0xcf,0x7b,0xcf,0x7b,0xcf,0x7b,0xcf,0x7b,0xcf,0x7b,0xcf,0x7b,0xcf,0x7b,0xcf,0x7b,0x49,0x4a,0x65,0x29,0x86,0x31,0x65,0x29,0x69,0x4a,0xcf,0x7b,0xcf,0x7b,0xcf,0x7b,0xcf,0x7b,0x69,0x4a,0x65,0x29,0x86,0x31,0x65,0x29,0x49,0x4a,0xcf,0x7b,0xeb,0x5a,0x86,0x31,
    0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
    0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
    0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
    0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
    0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
    0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
    0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
    0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
    0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
    0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
    0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
    0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
    0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
    0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
    0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,

};

const lv_img_dsc_t img_mqtt_logo_image = {
  .header.magic = LV_IMAGE_HEADER_MAGIC,
  .header.cf = LV_COLOR_FORMAT_RGB565A8,
  .header.flags = 0,
  .header.w = 30,
  .header.h = 30,
  .header.stride = 60,
  .data_size = 2700,
  .data = img_mqtt_logo_image_map,
};
