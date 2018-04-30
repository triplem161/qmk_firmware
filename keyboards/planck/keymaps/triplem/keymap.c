#include "planck.h"

#define MMM_SPC LT(SYMBOL, KC_SPC)
enum LAYER {
  DVORAK,
  SYMBOL,
  NUMPAD,
  FUNCTION
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  /* Dvorak
   * ,-----------------------------------------------------------------------------------.
   * | Tab  |   ;  |   ,  |   .  |   P  |   Y  |   F  |   G  |   C  |   R  |   L  | Bksp |
   * |------+------+------+------+------+------+------+------+------+------+------+------|
   * | Ctrl |   A  |   O  |   E  |   U  |   I  |   D  |   H  |   T  |   N  |   S  |  -   |
   * |------+------+------+------+------+------+------+------+------+------+------+------|
   * | Shift|   "  |   Q  |   J  |   K  |   X  |   B  |   M  |   W  |   V  |   Z  |Enter |
   * |------+------+------+------+------+------+------+------+------+------+------+------|
   * |      |      | GUI  | Alt  | MMM  |      | Funct|NumPad|      |      |      |      |
   * `-----------------------------------------------------------------------------------'
   */
  [DVORAK] = {
    {KC_TAB,   KC_SCOLON,KC_COMM,  KC_DOT,  KC_P,   KC_Y,     KC_F,     KC_G,     KC_C,     KC_R,     KC_L,     KC_BSPACE},
    {KC_LCTRL, KC_A,     KC_O,     KC_E,    KC_U,   KC_I,     KC_D,     KC_H,     KC_T,     KC_N,     KC_S,     KC_MINS},
    {KC_LSFT,  KC_QUOT,  KC_Q,     KC_J,    KC_K,   KC_X,     KC_B,     KC_M,     KC_W,     KC_V,     KC_Z,     KC_ENTER},
    {_______,  _______,  KC_LGUI,  KC_LALT, MMM_SPC, _______, MO(FUNCTION),  MO(NUMPAD),_______,  _______,  _______, _______}
  },

  /* Symbol
   * ,-----------------------------------------------------------------------------------.
   * | Esc  |   &  |   %  |   `  |   $  |      |      |      |   ^  |   @  |   #  |      |
   * |------+------+------+------+------+------+------+------+------+------+------+------|
   * | Ctrl |   [  |   {  |   }  |   (  |   =  |   *  |   )  |   +  |   ]  |   !  |  /   |
   * |------+------+------+------+------+------+------+------+------+------+------+------|
   * | Shift|      |      |      |      |      |      |      |      |      |      |      |
   * |------+------+------+------+------+------+------+------+------+------+------+------|
   * |      |      |      | Alt  |      |      |      |      |      |      | Swap |Unswp |
   * `-----------------------------------------------------------------------------------'
   */
  [SYMBOL] = {
    {KC_ESC,  KC_AMPR, KC_PERC,  KC_GRV, KC_DLR, _______, _______, _______,  KC_CIRCUMFLEX,   KC_AT, KC_HASH, KC_SLASH},
    {KC_LCTRL,  KC_LBRC,  KC_LCBR,  KC_RCBR, KC_LPRN, KC_EQL, KC_ASTR, KC_RPRN, KC_PLUS , KC_RBRC,  KC_EXLM,  KC_BSLS},
    {KC_LSFT,  _______,  _______,  _______, _______, _______, _______, _______,  _______,  _______,  _______,  _______},
    {_______,  _______,  _______,  KC_LALT, _______, _______, _______, _______,  _______,  _______,  MAGIC_UNSWAP_LALT_LGUI,  MAGIC_SWAP_LALT_LGUI}
  },

  /* Numpad
   * ,-----------------------------------------------------------------------------------.
   * |      |      | Home |  UP  | End  |      |      |   1  |  2   |  3   |      |      |
   * |------+------+------+------+------+------+------+------+------+------+------+------|
   * |      |      | LEFT | DOWN |RIGHT |      |      |   4  |  5   |  6   |      |      |
   * |------+------+------+------+------+------+------+------+------+------+------+------|
   * |      |      | PrSr |      |      |      |      |   7  |  8   |  9   |      |      |
   * |------+------+------+------+------+------+------+------+------+------+------+------|
   * |      |      |      |      |      |      |      |      |  0   |      |      |      |
   * `-----------------------------------------------------------------------------------'
   */
  [NUMPAD] = {
    {_______,  _______,  KC_HOME,  KC_UP, KC_END, _______,  _______,KC_KP_1,  KC_KP_2,  KC_KP_3,  _______,  _______},
    {_______,  _______,  KC_LEFT,  KC_DOWN, KC_RIGHT, _______,  _______,KC_KP_4,  KC_KP_5,  KC_KP_6,  _______,  _______},
    {_______,  _______,  KC_PSCR,  _______, _______, _______,  _______,KC_KP_7,  KC_KP_8,  KC_KP_9,  _______,  _______},
    {_______,  _______,  _______,  _______, _______, _______,  _______,_______,  KC_KP_0,  _______,  _______,  _______}
  },

  /* Function
   * ,-----------------------------------------------------------------------------------.
   * |      |      |      |      |      |      |      |      |      |      |      |      |
   * |------+------+------+------+------+------+------+------+------+------+------+------|
   * |  F1  |  F2  |  F3  |  F4  |  F5  |  F6  |  F7  |  F8  |  F9  | F10  | F11  | F12  |
   * |------+------+------+------+------+------+------+------+------+------+------+------|
   * |      |      |      |      |      |      |      |      |      |      |      |      |
   * |------+------+------+------+------+------+------+------+------+------+------+------|
   * |      |      |      |      |      |      |      |      |      |      |      |      |
   * `-----------------------------------------------------------------------------------'
   */
  [FUNCTION] = {
    {_______,  _______,  _______,  _______, _______, _______,  _______, _______, _______, _______,  _______,  _______},
    {  KC_F1,    KC_F2,     KC_F3,   KC_F4,   KC_F5,   KC_F6,    KC_F7,   KC_F8,   KC_F9,  KC_F10,   KC_F11,   KC_F12},
    {_______,  _______,  _______,  _______, _______, _______,  _______, _______, _______, _______,  _______,  _______},
    {_______,  _______,  _______,  _______, _______, _______,  _______, _______, _______, _______,  _______,  _______}
  }
};
