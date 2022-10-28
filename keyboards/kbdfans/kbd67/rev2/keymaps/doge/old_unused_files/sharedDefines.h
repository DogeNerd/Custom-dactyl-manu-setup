// Making sharedDefines defined
#ifndef SHAREDDEFINES_H
#define SHAREDDEFINES_H

// Inlcuding external files
#include QMK_KEYBOARD_H
#include "version.h"

// Defining some BOOLS
#define bool _Bool
#define true 1
#define false 0

// Defining keymappings
#define layer_qwerty 0
#define layer_lower 1
#define layer_other 2

extern bool scrollwheel_up_on;
extern bool scrollwheel_down_on;
extern uint16_t scroll_delay_timer;

#endif
