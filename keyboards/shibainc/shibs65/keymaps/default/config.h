#pragma once
#include "config_common.h"

#define QMK_KEYS_PER_SCAN 12

// Mouse Keyboard setup
#define MK_3_SPEED
#define MK_W_OFFSET_UNMOD 1
#define MK_W_INTERVAL_UNMOD 20
#define MOUSEKEY_MAX_SPEED 7
// Leader and combo settings
#define LEADER_PER_KEY_TIMING
#define LEADER_TIMEOUT 500
#define COMBO_COUNT 2
#define COMBO_TERM 2
// Tap dance functions
#define TAPPING_TERM 250
#define ONESHOT_TAP_TOGGLE 5
#define ONESHOT_TIMEOUT 1500
