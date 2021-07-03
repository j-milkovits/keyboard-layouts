#include QMK_KEYBOARD_H


#define _QWERTY 0
#define _MEDIA 1
#define _NAV 2
#define _MOUSE 3
#define _SYM 4
#define _NUM 5
#define _FN 6

// Left-hand home row mods
#define HOME_A LGUI_T(KC_A)
#define HOME_S LALT_T(KC_S)
#define HOME_D LCTL_T(KC_D)
#define HOME_F LSFT_T(KC_F)

// Right-hand home row mods
#define HOME_J RSFT_T(KC_J)
#define HOME_K RCTL_T(KC_K)
#define HOME_L LALT_T(KC_L)
#define HOME_SCLN RGUI_T(KC_SCLN)

#define L_MED LT(MEDIA, KC_ESC)
#define L_NAV LT(NAV,   KC_SPACE)
#define L_MOU LT(MOUSE, KC_TAB)
#define L_SYM LT(SYM,   KC_ENTER)
#define L_NUM LT(NUM,   KC_BSPC)
#define L_FNC LT(FN,    KC_DEL)

#define QWERTY 0
#define MEDIA 1
#define NAV 2
#define MOUSE 3
#define SYM 4
#define NUM 5
#define FN 6

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [_QWERTY] = LAYOUT(
        _______, KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    _______,   _______, KC_Y,    KC_U,    KC_I,     KC_O,    KC_P,      _______,
        _______, HOME_A,  HOME_S,  HOME_D,  HOME_F,  KC_G,    _______,   _______, KC_H,    HOME_J,  HOME_K,   HOME_L,  HOME_SCLN, _______,
        _______, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    _______,   _______, KC_N,    KC_M,    KC_COMM,  KC_DOT,  KC_SLSH,   _______,
        _______, _______, _______, L_MED,   L_NAV,   L_MOU,                       L_SYM,   L_NUM,   L_FNC,  _______, _______,   _______
    ),

    [_MEDIA] = LAYOUT(
        _______, _______, _______, _______, _______, _______, _______,         _______, _______, _______, _______, _______, _______, _______,
        _______, KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, _______, _______,         _______, _______, KC_MPRV, KC_VOLD, KC_VOLU, KC_MNXT, _______,
        _______, _______, _______, _______, _______, _______, _______,         _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______,                           KC_MSTP, KC_MPLY, KC_MUTE, _______, _______, _______
    ),

    [_NAV] = LAYOUT(
        _______, _______, _______, _______, _______, _______, _______,         _______, _______, KC_PSTE, KC_COPY, KC_CUT,  KC_UNDO, _______,
        _______, KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, _______, _______,         _______, KC_CAPS, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, _______,
        _______, _______, _______, _______, _______, _______, _______,         _______, KC_INS,  KC_HOME, KC_PGDN, KC_PGUP, KC_END,  _______,
        _______, _______, _______, _______, _______, _______,                           KC_ENT,  KC_BSPC, KC_DEL,  _______, _______, _______
    ),

    [_MOUSE] = LAYOUT(
        _______, _______, _______, _______, _______, _______, _______,         _______, _______, _______, _______, _______, _______, _______,
        _______, KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, _______, _______,         _______, _______, KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R, _______,
        _______, _______, _______, _______, _______, _______, _______,         _______, _______, KC_WH_L, KC_WH_D, KC_WH_U, KC_WH_R, _______,
        _______, _______, _______, _______, _______, _______,                           KC_BTN1, KC_BTN3, KC_BTN2, _______, _______, _______
    ),

    [_SYM] = LAYOUT(
        _______, KC_LCBR, KC_AMPR, KC_ASTR, KC_LPRN, KC_RCBR, _______,         _______, _______, _______, _______, _______, _______, _______,
        _______, KC_COLN, KC_DLR,  KC_PERC, KC_CIRC, KC_PLUS, _______,         _______, _______, KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI, _______,
        _______, KC_TILD, KC_EXLM, KC_AT,   KC_HASH, KC_PIPE, _______,         _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, KC_LPRN, KC_RPRN, KC_UNDS,                           _______, _______, _______, _______, _______, _______
    ),

    [_NUM] = LAYOUT(
        _______, KC_LBRC, KC_7,    KC_8,    KC_9,    KC_RBRC, _______,         _______, _______, _______, _______, _______, _______, _______,
        _______, KC_SCLN, KC_4,    KC_5,    KC_6,    KC_EQL,  _______,         _______, _______, KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI, _______,
        _______, KC_GRV,  KC_1,    KC_2,    KC_3,    KC_BSLS, _______,         _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, KC_DOT,  KC_0,    KC_MINS,                           _______, _______, _______, _______, _______, _______
    ),

    [_FN] = LAYOUT(
        _______, KC_F12,  KC_F7,   KC_F8,   KC_F9,   KC_PSCR, _______,         _______, _______, _______, _______, _______, _______, _______,
        _______, KC_F11,  KC_F4,   KC_F5,   KC_F6,   KC_SLCK, _______,         _______, _______, KC_RSFT, KC_RCTL, KC_LALT, KC_RGUI, _______,
        _______, KC_F10,  KC_F1,   KC_F2,   KC_F3,   KC_PAUS, _______,         _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, KC_APP,  KC_SPC,  KC_TAB,                            _______, _______, _______, _______, _______, _______
    )
};

uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case LGUI_T(KC_A):
            return 300;
        case LALT_T(KC_S):
            return 300;
        case LCTL_T(KC_D):
            return 300;
        default:
            return TAPPING_TERM;
    }
}