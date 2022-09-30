#pragma once
#include "config_common.h"

// Vendor IDs
#define VENDOR_ID 0x444D
#define PRODUCT_ID 0x3536
// Saving coding space
#undef NO_DEBUG
#define NO_DEBUG
#undef NO_PRINT
#define NO_PRINT
// RP2040 Settings
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET 
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_TIMEOUT 200U
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_LED_MASK 0U
// More RP2040 Settings
#define RP2040_FLASH_AT25SF128A
#define RP2040_FLASH_GD25Q64CS
#define RP2040_FLASH_W25X10CL
#define RP2040_FLASH_IS25LP080
#define RP2040_FLASH_GENERIC_03H
// End of RP2040

// Leader Settings
#define USE_SERIAL
#define MASTER_LEFT
// key matrix size // Rows are doubled-up
#define MATRIX_ROWS 12
#define MATRIX_COLS 6
// Wiring of each half
#define MATRIX_COL_PINS { GP3, GP4, GP5, GP6, GP7, GP8 }
#define MATRIX_ROW_PINS { GP10, GP11, GP12, GP13, GP14, GP15 }
#define DIODE_DIRECTION COL2ROW
// WS2812 RGB LED strip input and number of LEDs
//#define RGB_DI_PIN D3
//#define RGBLED_NUM 12
// Mouse Keyboard setup
#define MK_3_SPEED
#define MK_W_OFFSET_UNMOD 1
#define MK_W_INTERVAL_UNMOD 20
#define MOUSEKEY_MAX_SPEED 7
// Leader Key Defines
#define LEADER_PER_KEY_TIMING
#define LEADER_TIMEOUT 500
// Combo Count
#define COMBO_COUNT 2
#define COMBO_TERM 2
// Complete Death
#define USB_POLLING_INTERVAL_MS 1
#define QMK_KEYS_PER_SCAN 12
#define FORCE_NKRO
#define DEBOUNCE 5
// Tap Dancing
#define TAPPING_TERM 150
// ONESHOT Tap
#define ONESHOT_TAP_TOGGLE 5
#define ONESHOT_TIMEOUT 1500
// Disabling ALL of the RGB effects, to use our own and save firmware size.
#undef RGBLIGHT_ANIMATIONS
#undef RGBLIGHT_EFFECT_BREATHING
#undef RGBLIGHT_EFFECT_RAINBOW_MOOD
#undef RGBLIGHT_EFFECT_RAINBOW_SWIRL
#undef RGBLIGHT_EFFECT_SNAKE
#undef RGBLIGHT_EFFECT_KNIGHT
#undef RGBLIGHT_EFFECT_CHRISTMAS
#undef RGBLIGHT_EFFECT_STATIC_GRADIENT
#undef RGBLIGHT_EFFECT_RGB_TEST
#undef RGBLIGHT_EFFECT_ALTERNATING
#undef RGBLIGHT_EFFECT_TWINKLE
#undef ENABLE_RGB_MATRIX_ALPHAS_MODS
#undef ENABLE_RGB_MATRIX_GRADIENT_UP_DOWN
#undef ENABLE_RGB_MATRIX_GRADIENT_LEFT_RIGHT
#undef ENABLE_RGB_MATRIX_BREATHING
#undef ENABLE_RGB_MATRIX_BAND_SAT
#undef ENABLE_RGB_MATRIX_BAND_VAL
#undef ENABLE_RGB_MATRIX_BAND_PINWHEEL_SAT
#undef ENABLE_RGB_MATRIX_BAND_PINWHEEL_VAL
#undef ENABLE_RGB_MATRIX_BAND_SPIRAL_SAT
#undef ENABLE_RGB_MATRIX_BAND_SPIRAL_VAL
#undef ENABLE_RGB_MATRIX_CYCLE_ALL
#undef ENABLE_RGB_MATRIX_CYCLE_LEFT_RIGHT
#undef ENABLE_RGB_MATRIX_CYCLE_UP_DOWN
#undef ENABLE_RGB_MATRIX_RAINBOW_MOVING_CHEVRON
#undef ENABLE_RGB_MATRIX_CYCLE_OUT_IN
#undef ENABLE_RGB_MATRIX_CYCLE_OUT_IN_DUAL
#undef ENABLE_RGB_MATRIX_CYCLE_PINWHEEL
#undef ENABLE_RGB_MATRIX_CYCLE_SPIRAL
#undef ENABLE_RGB_MATRIX_DUAL_BEACON
#undef ENABLE_RGB_MATRIX_RAINBOW_BEACON
#undef ENABLE_RGB_MATRIX_RAINBOW_PINWHEELS
#undef ENABLE_RGB_MATRIX_RAINDROPS
#undef ENABLE_RGB_MATRIX_JELLYBEAN_RAINDROPS
#undef ENABLE_RGB_MATRIX_HUE_BREATHING
#undef ENABLE_RGB_MATRIX_HUE_PENDULUM
#undef ENABLE_RGB_MATRIX_HUE_WAVE
#undef ENABLE_RGB_MATRIX_PIXEL_FRACTAL
#undef ENABLE_RGB_MATRIX_PIXEL_RAIN
#undef ENABLE_RGB_MATRIX_TYPING_HEATMAP
#undef ENABLE_RGB_MATRIX_DIGITAL_RAIN
#undef ENABLE_RGB_MATRIX_SOLID_REACTIVE_SIMPLE
#undef ENABLE_RGB_MATRIX_SOLID_REACTIVE
#undef ENABLE_RGB_MATRIX_SOLID_REACTIVE_WIDE
#undef ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTIWIDE
#undef ENABLE_RGB_MATRIX_SOLID_REACTIVE_CROSS
#undef ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTICROSS
#undef ENABLE_RGB_MATRIX_SOLID_REACTIVE_NEXUS
#undef ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTINEXUS
#undef ENABLE_RGB_MATRIX_SPLASH
#undef ENABLE_RGB_MATRIX_MULTISPLASH
#undef ENABLE_RGB_MATRIX_SOLID_SPLASH
#undef ENABLE_RGB_MATRIX_SOLID_MULTISPLASH
