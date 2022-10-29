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
//#define RP2040_FLASH_AT25SF128A
//#define RP2040_FLASH_GD25Q64CS
//#define RP2040_FLASH_W25X10CL
//#define RP2040_FLASH_IS25LP080
//#define RP2040_FLASH_GENERIC_03H
// End of RP2040

// Using some I2C drivers for OLED support
#ifdef OLED_ENABLE
#define I2C_DRIVER I2CD1
#define I2C1_SDA_PIN GP18
#define I2C1_SCL_PIN GP19
// Setting more OLED stuff
//#define SPLIT_OLED_ENABLE
//#define SPLIT_WPM_ENABLE
//#define SPLIT_MODS_ENABLE
#define OLED_DISPLAY_WIDTH 128
#define OLED_DISPLAY_HEIGHT 32
#define OLED_MATRIX_SIZE 512
#define OLED_RESET -1
#define OLED_DISPLAY_ADDRESS 0x3C
#define OLED_BRIGHTNESS 255
#define OLED_TIMEOUT 32000
#define OLED_FADE_OUT
#define OLED_FADE_OUT_INTERVAL 0
#endif
// OLED end
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
// Sub cata for NKRO stuff start
#define FORCE_NKRO
#define MG_NKRO MAGIC_TOGGLE_NKRO
// Sub cata for NKRO stuff end
#define DEBOUNCE 3
// Tap Dancing
#ifdef TAP_DANCE_ENABLE
#define TAPPING_TERM 150
// ONESHOT Tap
#define ONESHOT_TAP_TOGGLE 5
#define ONESHOT_TIMEOUT 1500
#endif
// end oneshot and tap dancing
