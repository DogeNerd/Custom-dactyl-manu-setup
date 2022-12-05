#pragma once
#include "config_common.h"

/* disable debug print */
//#define NO_DEBUG
/* disable print */
//#define NO_PRINT

// Matrix rows
#define MATRIX_ROWS 5
#define MATRIX_COLS 16
// The Rows and Cols Matrix Pins 
#define MATRIX_COL_PINS { F7, F6, F5, F4, F1, F0, C7, C6, B6, B5, B4, D7, D5, D3, D1, D4 }
#define MATRIX_ROW_PINS { B1, B2, B3, D6, D4}
// COL2ROW or ROW2COL
#define DIODE_DIRECTION COL2ROW

// Complete Death
#define USB_POLLING_INTERVAL_MS 1
#define DEBOUNCE 3
#define FORCE_NKRO
#define MG_NKRO MAGIC_TOGGLE_NKRO

// Rotary encoder
#define ENCODERS_PAD_A { D3 }
#define ENCODERS_PAD_B { D2 }
#define ENCODER_RESOLUTION 4
