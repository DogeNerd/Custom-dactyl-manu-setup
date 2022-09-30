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

//#define MATRIX_COL_PINS { GP7, GP8, GP9, GP10, GP11, GP12 }
//#define MATRIX_ROW_PINS { GP1, GP2, GP3, GP4, GP5, GP6 }

#define DIODE_DIRECTION COL2ROW
// End of Basic Config
