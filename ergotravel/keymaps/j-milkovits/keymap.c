#include QMK_KEYBOARD_H
#include <time.h>


#define _QWERTY 0
#define _LOWER 1
#define _RAISE 2
#define _ADJUST 16

enum custom_keycodes {
  QWERTY = SAFE_RANGE,
  LOWER,
  RAISE,
  ADJUST,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [_QWERTY] = LAYOUT(
    KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    _______,          _______, KC_Y,    KC_U,    KC_I,     KC_O,    KC_P,    KC_BSPC,
    KC_ESC,  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    _______,          _______, KC_H,    KC_J,    KC_K,     KC_L,    KC_SCLN, KC_QUOT,
    KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    _______,          _______, KC_N,    KC_M,    KC_COMM,  KC_DOT,  KC_SLSH, KC_RSFT,
    KC_LCTL, KC_DEL,  KC_LGUI, KC_LALT,          LOWER,   KC_SPC,         KC_SPC,  RAISE,            KC_ENTER, KC_RALT, KC_RGUI, KC_RCTL
  ),

  [_LOWER] = LAYOUT(
    KC_TILD,   KC_EXLM,    KC_AT,   KC_HASH,       KC_DLR,        KC_PERC,    _______,          _______, KC_CIRC, KC_AMPR, KC_ASTR, _______, _______, _______,
    LCA(KC_5), KC_GRV,     KC_UNDS, KC_MINS,       KC_EQL,        _______,    _______,          _______, _______, KC_LEFT, KC_UP,   KC_DOWN, KC_RGHT, KC_BSLS,
    _______,   LCTL(KC_Z), KC_LGUI, LSFT(KC_LALT), LCTL(KC_LALT), _______,    _______,          _______, _______, _______, _______, _______, _______, _______,
    _______,   _______,    _______, _______,                      ADJUST,     _______,          KC_SPC,  _______,          KC_MNXT, KC_VOLD, KC_VOLU, KC_MPLY

  ),

  [_RAISE] = LAYOUT(
    KC_F1,   KC_F2,   KC_F3,   KC_LBRC, KC_RBRC, _______, _______,          _______, KC_MINS, KC_7,    KC_8,     KC_9,    KC_ASTR, _______,
    KC_F4,   KC_F5,   KC_F6,   KC_LPRN, KC_RPRN, KC_DOT,  _______,          _______, KC_PLUS, KC_4,    KC_5,     KC_6,    KC_SLSH, _______,
    KC_F7,   KC_F8,   KC_F9,   KC_LCBR, KC_RCBR, KC_COMM, _______,          _______, KC_0,    KC_1,    KC_2,     KC_3,    _______, _______,
    KC_F10,  KC_F11,  KC_F12,  _______,          _______, _______,          _______, ADJUST,           _______,  _______, _______, _______
  ),

  [_ADJUST] = LAYOUT(
    RESET,   _______,  _______, _______, _______, _______, _______,         _______, _______, _______, _______, _______, _______, _______,
    _______, _______,  _______, _______, _______, _______, _______,         _______, _______, _______, _______, _______, _______, _______,
    _______, _______,  _______, _______, _______, _______, _______,         _______, _______, _______, _______, _______, _______, _______,
    _______, _______,  _______, _______,          _______, _______,         _______, _______,          _______, _______, _______, _______
  )

};







bool process_record_user(uint16_t keycode, keyrecord_t *record) {



    switch (keycode) {
        case default:
            return true;
            break;
    return true;
}
