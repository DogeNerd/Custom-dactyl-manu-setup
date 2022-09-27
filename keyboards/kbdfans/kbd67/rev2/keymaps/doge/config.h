#pragma once
#include "config_common.h"

/* Mouse Keyboard setup */
#define MK_3_SPEED
#define MK_W_OFFSET_UNMOD 1
#define MK_W_INTERVAL_UNMOD 20
#define MOUSEKEY_MAX_SPEED 7
/* Leader Key Defines */
#define LEADER_PER_KEY_TIMING
#define LEADER_TIMEOUT 500
/* Combo Count */
#define COMBO_COUNT 2
#define COMBO_TERM 2
/* Complete Death*/
#define USB_POLLING_INTERVAL_MS 1
#define QMK_KEYS_PER_SCAN 12
#define DEBOUNCE 5
#define FORCE_NKRO

/* USB Device descriptor parameter */
#define VENDOR_ID       0x4B42
#define PRODUCT_ID      0x6067
#define DEVICE_VER      0x0002
#define MANUFACTURER    KBDFans
#define PRODUCT         KBD67v2
