// Dactyl Manuform Hotswap
#pragma once

#include "config_common.h"
// Basic Config

// Using Serial instead of I2C
#define USE_SERIAL

/* key matrix size */
// Rows are doubled-up
#define MATRIX_ROWS 12
#define MATRIX_COLS 6

#define MATRIX_COL_PINS { GP3, GP4, GP5, GP6, GP7, GP8 }
#define MATRIX_ROW_PINS { GP10, GP11, GP12, GP13, GP14, GP15 }
#define DIODE_DIRECTION COL2ROW

// End of Basic Config
