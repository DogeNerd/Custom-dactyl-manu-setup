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

// Complete Death
#define USB_POLLING_INTERVAL_MS 1
#define QMK_KEYS_PER_SCAN 12
#define FORCE_NKRO
#define MG_NKRO MAGIC_TOGGLE_NKRO
#define DEBOUNCE 3

// Mouse Keyboard setup
#define MK_3_SPEED
#define MK_W_OFFSET_UNMOD 1
#define MK_W_INTERVAL_UNMOD 20
#define MOUSEKEY_MAX_SPEED 7

// Leader and combo settings
#ifdef COMBO_ENABLE
#ifdef LEADER_ENABLE
#define LEADER_PER_KEY_TIMING
#define LEADER_TIMEOUT 500
#define COMBO_COUNT 2
#define COMBO_TERM 2
#endif
#endif

// Tap Dancing and Oneshot settings
#ifdef TAP_DANCE_ENABLE
#define TAPPING_TERM 150
#define ONESHOT_TAP_TOGGLE 5
#define ONESHOT_TIMEOUT 1500
#endif
