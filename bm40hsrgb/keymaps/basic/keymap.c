/* Copyright 2019
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#include QMK_KEYBOARD_H

enum layers {
  _QWERTY = 0,
  _LOWER,
  _RAISE,
  _ADJUST,
};

#define LOWER  MO(_LOWER)
#define RAISE  MO(_RAISE)
#define ADJUST MO(_ADJUST)


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/* Qwerty
 * ,-----------------------------------------------------------------------------------.
 * | Tab  |   Q  |   W  |   E  |   R  |   T  |   Y  |   U  |   I  |   O  |   P  | Bksp |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * | Esc  |   A  |   S  |   D  |   F  |   G  |   H  |   J  |   K  |   L  |   ;  |  "   |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * | Shift|   Z  |   X  |   C  |   V  |   B  |   N  |   M  |   ,  |   .  |   /  | SHIFT|
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Ctrl | Delt | GUI |  Alt  |Lower |    Space    |Raise | Enter| RAlt | RGUI | RCTRL|
 * `-----------------------------------------------------------------------------------'
 */
[_QWERTY] = LAYOUT_planck_mit( \
  KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,     KC_I,    KC_O,    KC_P,    KC_BSPC, \
  KC_ESC,  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,     KC_K,    KC_L,    KC_SCLN, KC_QUOT, \
  KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,     KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT , \
  KC_LCTL, KC_DEL,  KC_LGUI, KC_LALT, LOWER,   KC_SPC,  RAISE,   KC_ENTER, KC_RALT, KC_RGUI, KC_RCTL \
),
/* Lower 
 * ,-----------------------------------------------------------------------------------.
 * |   ~  |   !  |   @  |   #  |   $  |   %  |   ^  |   &  |   *  |      |      |      |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * |   €  |   `  |   _  |   -  |   =  |      |      | LEFT |  UP  | DOWN | RIGHT|  \   |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * |      | Undo |  GUI |SFTALT|CTLALT|      |      |      |      |      |      |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |             |      | Next | Vol- | Vol+ | Play |
 * `-----------------------------------------------------------------------------------'
 */
[_LOWER] = LAYOUT_planck_mit( \
  KC_TILD,   KC_EXLM,    KC_AT,   KC_HASH,          KC_DLR,        KC_PERC, KC_CIRC, KC_AMPR, KC_ASTR, _______, _______, _______, \
  LCA(KC_5), KC_GRV,     KC_UNDS, KC_MINS,          KC_EQL,        _______, _______, KC_LEFT, KC_UP,   KC_DOWN, KC_RGHT, KC_BSLS, \
  _______,   LCTL(KC_Z), KC_LGUI, LSFT(KC_LALT),    LCTL(KC_LALT), _______, _______, _______, _______, _______, _______, _______, \
  _______,   _______,    _______, _______,          ADJUST,        _______, _______, KC_MNXT, KC_VOLD, KC_VOLU, KC_MPLY \
),
/* Raise
 * ,-----------------------------------------------------------------------------------.
 * |  F1  |  F2  |  F3  |   [  |   ]  |      |   -  |  7   |  8   |  9   |   *  |      |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * |  F4  |  F5  |  F6  |   (  |   )  |   .  |   +  |  4   |  5   |  6   |   /  |      |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * |  F7  |  F8  |  F9  |   {  |   }  |   ,  |   0  |  1   |  2   |  3   |      |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |  F10 | F11  | F12  |      |      |             |      |      |      |      |      |
 * `-----------------------------------------------------------------------------------'
 */
[_RAISE] = LAYOUT_planck_mit( \
  KC_F1,   KC_F2,   KC_F3,   KC_LBRC, KC_RBRC, _______, KC_MINS, KC_7,    KC_8,    KC_9, KC_ASTR, _______, \
  KC_F4,   KC_F5,   KC_F6,   KC_LPRN, KC_RPRN, KC_DOT,  KC_PLUS, KC_4,    KC_5,    KC_6, KC_SLSH, _______, \
  KC_F7,   KC_F8,   KC_F9,   KC_LCBR, KC_RCBR, KC_COMM, KC_0,    KC_1,    KC_2,    KC_3, _______,  _______, \
  KC_F10,  KC_F11,  KC_F12,  _______, _______, _______, ADJUST,  _______, _______, _______, _______ \
),
/* Adjust (Lower + Raise)
 * ,-----------------------------------------------------------------------------------.
 * |Reset |      |      |      |      |      |      |      |      |      |      |      |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * |      |      |      |      |      |      |      |      |      |      |      |      |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * |      |      |      |      |      |      |      |      |      |      |      |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |             |      |      |      |      |  RGB |
 * `-----------------------------------------------------------------------------------'
 */
[_ADJUST] = LAYOUT_planck_mit( \
  RESET,   _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, RGB_TOG \
)
};

layer_state_t layer_state_set_user(layer_state_t state) {
  return update_tri_layer_state(state, _LOWER, _RAISE, _ADJUST);
}
