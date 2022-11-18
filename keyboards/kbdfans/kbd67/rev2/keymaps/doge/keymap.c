#include QMK_KEYBOARD_H
#include "version.h"
// Incuding stdbool for boolean
#include <stdbool.h>

// Defining keymappings
#define qwerty   0
#define furo     1
#define rgb      2

// Setting leader_key bool
// If not using leader and combo comment this out.
#ifdef COMBO_ENABLE
#ifdef LEADER_ENABLE
bool leader_key_is_running = false;
bool combo_on = true;
// Starting the scroll timer keyboards post
// We're also defining the scroll timer
// Scroll timer defines
extern bool scrollwheel_up_on;
extern bool scrollwheel_down_on;
extern uint16_t scroll_delay_timer;
// Scroll timer
void keyboard_post_init_user(void) {
    scroll_delay_timer = timer_read();
}
#endif
#endif

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[qwerty]  = LAYOUT_65_ansi(QK_GESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL, KC_BSPC, KC_DEL, KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_RBRC, KC_BSLS, KC_HOME, KC_CAPS, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_ENT, KC_PGUP, KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT, KC_UP, KC_PGDN, KC_LCTL, KC_LGUI, KC_LALT, KC_SPC, KC_RALT, KC_RCTL, MO(1), KC_LEFT, KC_DOWN, KC_RGHT),
	[furo]    = LAYOUT_65_ansi(KC_GRV, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_DEL, KC_VOLU, KC_TRNS, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_MPRV, KC_MNXT, KC_INT2, KC_VOLD, KC_CALC, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_TRNS, KC_TRNS, KC_TRNS, KC_BRID, KC_BRIU, KC_INT4, RGB_VAI, KC_TRNS, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_TRNS, KC_MRWD, KC_MFFD, KC_EXEC, MO(2), KC_UP, RGB_VAD, EE_CLR, KC_LGUI, QK_BOOT, KC_TRNS, KC_RALT, KC_RCTL, KC_TRNS, KC_LEFT, KC_DOWN, KC_RGHT),
	[rgb]     = LAYOUT_65_ansi(RGB_TOG, BL_TOGG, BL_STEP, BL_BRTG, RGB_M_P, RGB_M_B, RGB_M_R, RGB_M_SW, RGB_M_SN, RGB_M_K, RGB_M_X, RGB_M_G, RGB_M_T, KC_TRNS, RGB_MOD, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, RGB_RMOD, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, RGB_HUI, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, RGB_HUD, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
};

// Setting Scrolling combo
#ifdef COMBO_ENABLE
#ifdef LEADER_ENABLE
bool scrollwheel_down_on = false;
bool scrollwheel_up_on = false;

// Defining Combos -- Update combo count after in config.h
enum combo_events {
    COMBO_SCROLL_UP,
    COMBO_SCROLL_DOWN
};

const uint16_t PROGMEM combo_scroll_up[] = {KC_PGUP, COMBO_END};
const uint16_t PROGMEM combo_scroll_down[] = {KC_PGDN, COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
    [COMBO_SCROLL_UP] = COMBO_ACTION(combo_scroll_up),
    [COMBO_SCROLL_DOWN] = COMBO_ACTION(combo_scroll_down)
};

void process_combo_event(uint16_t combo_index, bool pressed) {

    switch(combo_index) {
        case COMBO_SCROLL_UP:
          if (pressed) {
            scrollwheel_up_on = true;
          }else{
            scrollwheel_up_on = false;
          }
      break;
        case COMBO_SCROLL_DOWN:
          if (pressed) {
            scrollwheel_down_on = true;
          }else{
            scrollwheel_down_on = false;
          }
      break;
   }
 }
//
uint16_t scroll_delay_timer;

LEADER_EXTERNS();
int did_leader_succeed;

void matrix_scan_user(void) {
  LEADER_DICTIONARY() {
    did_leader_succeed = leading = false;
  }
  leader_end();

  uint16_t current_timer_value = timer_read();

  if(scrollwheel_up_on || scrollwheel_down_on){
    if(timer_elapsed(scroll_delay_timer) > 50){ //call this every 100ms(Default)
        register_code16(scrollwheel_up_on ? KC_MS_WH_UP : KC_MS_WH_DOWN);
        unregister_code16(scrollwheel_up_on ? KC_MS_WH_UP : KC_MS_WH_DOWN);
        scroll_delay_timer = current_timer_value;
    }
  }
}

void leader_start(void) {
    leader_key_is_running = true;
}

void leader_end(void) {
    leader_key_is_running = false;
}
#endif
#endif
