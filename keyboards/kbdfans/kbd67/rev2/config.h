#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0x4B42
#define PRODUCT_ID      0x6067
#define DEVICE_VER      0x0002
#define MANUFACTURER    KBDFans
#define PRODUCT         KBD67v2

/* key matrix size */
#define MATRIX_ROWS 5
#define MATRIX_COLS 16

#define MATRIX_ROW_PINS { B7, D0, F0, F1, F4 }
#define MATRIX_COL_PINS { B0, B1, B2, B3, D1, D2, D3, D6, D7, B4, B6, C6, C7, F7, F6, F5 }

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* Debouncing reduces chatter */
#define DEBOUNCE 5

/* indicators */
#define LED_CAPS_LOCK_PIN D4
#define LED_PIN_ON_STATE 0

/* number of backlight levels */
#define BACKLIGHT_PIN B5
#ifdef BACKLIGHT_PIN
#define BACKLIGHT_LEVELS 3
#endif


#define RGB_DI_PIN E2
#ifdef RGB_DI_PIN
#define RGBLED_NUM 16
#define RGBLIGHT_HUE_STEP 8
#define RGBLIGHT_SAT_STEP 8
#define RGBLIGHT_VAL_STEP 8
#define RGBLIGHT_LIMIT_VAL 240
#define RGBLIGHT_SLEEP
#endif
