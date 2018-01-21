#include "planck.h"

enum LAYER {
  DVORAK,
  NUMPAD
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [DVORAK] = {
    {KC_TAB,   KC_SCOLON,  KC_COMM,  KC_DOT,  KC_P,   KC_Y,     KC_F,     KC_G,     KC_C,     KC_R,     KC_L,     KC_BSPACE},
    {KC_LCTRL, KC_A,     KC_O,     KC_E,    KC_U,   KC_I,     KC_D,     KC_H,     KC_T,     KC_N,     KC_S,     KC_ENTER},
    {KC_LSFT,  KC_QUOT,  KC_Q,     KC_J,    KC_K,   KC_X,     KC_B,     KC_M,     KC_W,     KC_V,     KC_Z,     _______},
    {_______,  _______,  KC_LGUI,  KC_LALT, KC_SPC, _______,  MO(NUMPAD),  _______,  _______,  _______,  _______,  MAGIC_SWAP_LALT_LGUI}
  },

  [NUMPAD] = {
    {_______,  _______,  _______,  _______, _______, _______,  KC_KP_1,  KC_KP_2,  KC_KP_3,  _______,  _______,  _______},
    {_______,  _______,  _______,  _______, _______, _______,  KC_KP_4,  KC_KP_5,  KC_KP_6,  _______,  _______,  _______},
    {_______,  _______,  _______,  _______, _______, _______,  KC_KP_7,  KC_KP_8,  KC_KP_9,  _______,  _______,  _______},
    {_______,  _______,  _______,  _______, _______, _______,  _______,  KC_KP_0,  _______,  _______,  _______,  _______}
  }
};
