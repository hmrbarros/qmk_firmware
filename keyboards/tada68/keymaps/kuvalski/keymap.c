#include "tada68.h"
#include "keymap_portuguese_pt.h"


// Used for SHIFT_ESC
#define MODS_CTRL_MASK  (MOD_BIT(KC_LSHIFT)|MOD_BIT(KC_RSHIFT))

// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.
#define _BL 0
#define _FL 1

#define _______ KC_TRNS

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  /* Keymap _BL: (Base Layer) Default Layer
   * ,----------------------------------------------------------------.
   * |Esc | 1|  2|  3|  4|  5|  6|  7|  8|  9|  0| '| < |Backsp | Ins |
   * |----------------------------------------------------------------|
   * |Tab  |  Q|  W|  E|  R|  T|  Y|  U|  I|  O|  P|  +| ´ | ~   |Home|
   * |----------------------------------------------------------------|
   * |Ctrl   |  A|  S|  D|  F|  G|  H|  J|  K|  L|  Ç|  /|Return |PgUp|
   * |----------------------------------------------------------------|
   * |Shift   |  Z|  X|  C|  V|  B|  N|  M|  ,|  .| -| Shift | Up|PgDn|
   * |----------------------------------------------------------------|
   * |FN |Win|Alt |        Space          |Alt| Win |Ctrl|Lef|Dow|Rig |
   * `----------------------------------------------------------------'
   */

[_BL] = KEYMAP_ANSI(
  KC_ESC,    PT_1,   PT_2,   PT_3,   PT_4,   PT_5,   PT_6,   PT_7,   PT_8,   PT_9,   PT_0,   PT_QUOT, PT_LESS, KC_BSPC,KC_INS, \
  KC_TAB,  PT_Q,   PT_W,   PT_E,   PT_R,   PT_T,   PT_Y,   PT_U,   PT_I,   PT_O,   PT_P,   PT_PLUS, PT_ACUT,PT_TILD,KC_HOME, \
  KC_LCTL, PT_A,   PT_S,   PT_D,   PT_F,   PT_G,   PT_H,   PT_J,   PT_K,   PT_L,   PT_CE, PT_SLSH,         KC_ENT,KC_PGUP,  \
  KC_LSFT,         PT_Z,   PT_X,   PT_C,   PT_V,   PT_B,   PT_N,   PT_M,   PT_COMM,PT_DOT, PT_MINS,   KC_RSFT,KC_UP,KC_PGDN, \
  MO(_FL), KC_LGUI,KC_LALT,                KC_SPC,                        PT_ALGR,KC_RGUI,KC_RCTRL, KC_LEFT,KC_DOWN,KC_RGHT),

  /* Keymap _FL: Function Layer
   * ,----------------------------------------------------------------.
   * |   | F1| F2| F3| F4| F5| F6| F7| F8| F9|F10|F11|F12|  DEL  |    |
   * |----------------------------------------------------------------|
   * |     |   |   |   |   |   |   |   |   |   |  BL |BL-|BL+| « |    |
   * |----------------------------------------------------------------|
   * |      |   |   |   |   |   |   |       |   |   |  º |        |    |
   * |----------------------------------------------------------------|
   * |        |   |   |   |   |   |   |   |   |   |   |      |   |    |
   * |----------------------------------------------------------------|
   * |    |    |    |                       |   |   |    |   |   |    |
   * `----------------------------------------------------------------'
   */
[_FL] = KEYMAP_ANSI(
  _______,  KC_F1,  KC_F2,  KC_F3,  KC_F4,  KC_F5,  KC_F6,  KC_F7,  KC_F8,  KC_F9,  KC_F10, KC_F11, KC_F12,KC_DEL,_______,  \
  _______,_______,_______,_______,_______,_______,_______,_______,_______,_______,BL_TOGG, BL_DEC,BL_INC, PT_ASPS,_______, \
  _______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,PT_OIND,        _______,_______, \
  _______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______, \
  _______,_______,_______,                 _______,               _______,_______,_______,_______,_______, _______),
};

/*enum function_id {
    //SHIFT_ESC,
};

const uint16_t PROGMEM fn_actions[] = {
  //[0]  = ACTION_FUNCTION(SHIFT_ESC),
};

void action_function(keyrecord_t *record, uint8_t id, uint8_t opt) {
  static uint8_t shift_esc_shift_mask;
  switch (id) {
    case SHIFT_ESC:
      shift_esc_shift_mask = get_mods()&MODS_CTRL_MASK;
      if (record->event.pressed) {
        if (shift_esc_shift_mask) {
          add_key(KC_GRV);
          send_keyboard_report();
        } else {
          add_key(KC_ESC);
          send_keyboard_report();
        }
      } else {
        if (shift_esc_shift_mask) {
          del_key(KC_GRV);
          send_keyboard_report();
        } else {
          del_key(KC_ESC);
          send_keyboard_report();
        }
      }
      break;
  }
}*/
