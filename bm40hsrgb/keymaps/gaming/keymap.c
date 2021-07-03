/* Copyright 2020 tominabox1
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

#define _QWERTY 0

#define QWERTY 0


// http://www.keyboard-layout-editor.com/#/gists/fd8be687268335407b9be8d4c377c1b6

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [_QWERTY] = LAYOUT_planck_mit( \
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    _______, _______, _______, _______, _______, _______, RESET,    \
        KC_LSFT, KC_A,    KC_S,    KC_D,    KC_G,    _______, _______, _______, _______, _______, _______, _______, \
        KC_LCTL, KC_X,    KC_C,    KC_V,    KC_B,    _______, _______, _______, _______, _______, _______, _______, \
        _______, _______, _______, _______, KC_LALT,  KC_SPC,           _______, _______, _______, _______, _______   \
    ),
};