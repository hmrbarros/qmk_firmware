#ifndef KEYMAP_PT_PT
#define KEYMAP_PT_PT

#include "keymap.h"

// Alt gr
#define ALGR(kc) RALT(kc)
#define PT_ALGR KC_RALT


// normal characters
#define PT_A KC_A
#define PT_B KC_B
#define PT_C KC_C
#define PT_D KC_D
#define PT_E KC_E
#define PT_F KC_F
#define PT_G KC_G
#define PT_H KC_H
#define PT_I KC_I
#define PT_J KC_J
#define PT_K KC_K
#define PT_L KC_L
#define PT_M KC_M
#define PT_N KC_N
#define PT_O KC_O
#define PT_P KC_P
#define PT_Q KC_Q
#define PT_R KC_R
#define PT_S KC_S
#define PT_T KC_T
#define PT_U KC_U
#define PT_V KC_V
#define PT_W KC_W
#define PT_X KC_X
#define PT_Y KC_Y
#define PT_Z KC_Z

#define PT_0 KC_0
#define PT_1 KC_1
#define PT_2 KC_2
#define PT_3 KC_3
#define PT_4 KC_4
#define PT_5 KC_5
#define PT_6 KC_6
#define PT_7 KC_7
#define PT_8 KC_8
#define PT_9 KC_9


#define PT_BSLS KC_GRAVE  // backslash and |
#define PT_QUOT KC_MINS   // ' and ?
#define PT_ASPS KC_EQL    // « and »
#define PT_PLUS KC_LBRC   // + and *
#define PT_ACUT KC_RBRC   // ´ and `
#define PT_CE   KC_SCLN   // ç
#define PT_OIND KC_QUOT   // º and ª
#define PT_TILD KC_BSLS   // ~ and ^

#define PT_LESS KC_NUBS   // < and >
#define PT_COMM KC_COMM   // , and ;
#define PT_DOT  KC_DOT    // . and :
#define PT_MINS KC_SLSH   // - and _


// shifted characters

#define PT_PIPE LSFT(PT_BSLS) // |

#define PT_EXLM LSFT(PT_1)    // !
#define PT_DQOT LSFT(PT_2)    // "
#define PT_HASH LSFT(PT_3)    // #
#define PT_DLR  LSFT(PT_4)    // $
#define PT_PERC LSFT(PT_5)    // %
#define PT_AMPR LSFT(PT_6)    // &
#define PT_SLSH LSFT(PT_7)    // /
#define PT_LPRN LSFT(PT_8)    // (
#define PT_RPRN LSFT(PT_9)    // )
#define PT_EQL  LSFT(PT_0)    // =

#define PT_QST  LSFT(PT_QUOT) // ?
#define PT_RSPS LSFT(PT_ASPS) // »

#define PT_ASTR LSFT(PT_PLUS) // *
#define PT_GRV  LSFT(PT_ACUT) // `
#define PT_INDF LSFT(PT_OIND) // ª
#define PT_CIRC LSFT(PT_TILD) // ^

#define PT_MORE LSFT(PT_LESS) // >
#define PT_SCLN LSFT(PT_COMM) // ;
#define PT_COLN LSFT(PT_DOT)  // :
#define PT_UNDS LSFT(PT_MINS) // _


// Alt Gr characters

#define PT_AT   ALGR(PT_2)    // @
#define PT_PND  ALGR(PT_3)    // £
#define PT_PARA ALGR(PT_4)    // §
#define PT_LCBR ALGR(PT_7)    // {
#define PT_LBRC ALGR(PT_8)    // [
#define PT_RBRC ALGR(PT_9)    // ]
#define PT_RCBR ALGR(PT_0)    // }



#endif
