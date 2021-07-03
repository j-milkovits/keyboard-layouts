#include QMK_KEYBOARD_H
#include <time.h>

#define _COLEMAK 0
#define _QWERTY 1
#define _MEDIA 2
#define _NAV 3
#define _MOUSE 4
#define _SYM 5
#define _NUM 6
#define _FN 7
#define _GAME 8

// QWERTY home row mods
#define HOME_A LGUI_T(KC_A)
#define HOME_S LALT_T(KC_S)
#define HOME_D LCTL_T(KC_D)
#define HOME_F LSFT_T(KC_F)
#define HOME_J RSFT_T(KC_J)
#define HOME_K RCTL_T(KC_K)
#define HOME_L LALT_T(KC_L)
#define HOME_SCLN RGUI_T(KC_SCLN)

// COLEMAK home row mods
#define CHOME_A LGUI_T(KC_A)
#define CHOME_R LALT_T(KC_R)
#define CHOME_S LCTL_T(KC_S)
#define CHOME_T LSFT_T(KC_T)
#define CHOME_N RSFT_T(KC_N)
#define CHOME_E RCTL_T(KC_E)
#define CHOME_I LALT_T(KC_I)
#define CHOME_O RGUI_T(KC_O)

#define L_MED LT(MEDIA, KC_DEL)
#define L_NAV LT(NAV,   KC_BSPC)
#define L_MOU LT(MOUSE, KC_TAB)
#define L_SYM LT(SYM,   KC_SPC)
#define L_NUM LT(NUM,   KC_ENT)
#define L_FNC LT(FN,    KC_ESC)  
#define L_GAM TG(GAME)
#define L_QWE TG(QWERTY)
 
#define WinSCS SGUI(KC_S) 
#define Euro LCA(KC_5)

#define COLEMAK 0
#define QWERTY 1
#define MEDIA 2
#define NAV 3
#define MOUSE 4
#define SYM 5
#define NUM 6
#define FN 7
#define GAME 8


// http://www.keyboard-layout-editor.com/#/gists/fd8be687268335407b9be8d4c377c1b6

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    
    [_COLEMAK] = LAYOUT(
        _______, KC_Q,    KC_W,    KC_F,    KC_P,    KC_B,    _______,         _______, KC_J,    KC_L,    KC_U,     KC_Y,    KC_QUOT, _______,
        _______, CHOME_A, CHOME_R, CHOME_S, CHOME_T, KC_G,    _______,         _______, KC_M,    CHOME_N, CHOME_E,  CHOME_I, CHOME_O, _______,
        _______, KC_Z,    KC_X,    KC_C,    KC_D,    KC_V,    _______,         _______, KC_K,    KC_H,    KC_COMM,  KC_DOT,  KC_SLSH, _______,
        _______, _______, _______, L_MED,   L_NAV,   L_MOU,                             L_SYM,   L_NUM,   L_FNC,  _______, _______,   _______
    ),

    [_QWERTY] = LAYOUT(
        _______, KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    _______,         _______, KC_Y,    KC_U,    KC_I,     KC_O,    KC_P,    _______,
        _______, HOME_A,  HOME_S,  HOME_D,  HOME_F,  KC_G,    _______,         _______, KC_H,    HOME_J,  HOME_K,   HOME_L,  KC_QUOT, _______,
        _______, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    _______,         _______, KC_N,    KC_M,    KC_COMM,  KC_DOT,  KC_SLSH, _______,
        _______, _______, _______, L_MED,   L_NAV,   L_MOU,                             L_SYM,   L_NUM,   L_FNC,  _______, _______,   _______
    ),

    [_MEDIA] = LAYOUT(
        _______, _______, _______, _______, _______, _______, _______,         _______, _______, _______, _______, _______, _______, _______,
        _______, KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, _______, _______,         _______, _______, KC_MPRV, KC_VOLD, KC_VOLU, KC_MNXT, _______,
        _______, _______, _______, _______, _______, _______, _______,         _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______,                           KC_MSTP, KC_MPLY, KC_MUTE, _______, _______, _______
    ),

    [_NAV] = LAYOUT(
        _______, _______, _______, _______, _______, _______, _______,         _______, _______, C(KC_X), C(KC_C), C(KC_V), C(KC_Z), _______,
        _______, KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, _______, _______,         _______, KC_CAPS, KC_LEFT, KC_UP,   KC_DOWN, KC_RGHT, _______,
        _______, WinSCS,  C(KC_X), C(KC_C), C(KC_V), _______, _______,         _______, KC_INS,  KC_HOME, KC_PGDN, KC_PGUP, KC_END,  _______,
        _______, _______, _______, _______, _______, _______,                           KC_SPC,  KC_ENT,  KC_ESC,  _______, _______, _______
    ),

    [_MOUSE] = LAYOUT(
        _______, _______, _______, _______, _______, _______, _______,         _______, _______, _______, _______, _______, _______, _______,
        _______, KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, _______, _______,         _______, _______, KC_MS_L, KC_MS_U, KC_MS_D, KC_MS_R, _______,
        _______, _______, _______, _______, _______, _______, _______,         _______, _______, KC_WH_L, KC_WH_U, KC_WH_D, KC_WH_R, _______,
        _______, _______, _______, _______, _______, _______,                           KC_BTN1, KC_BTN3, KC_BTN2, _______, _______, _______
    ),

    [_SYM] = LAYOUT(
        _______, KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC, _______,         _______, KC_CIRC, KC_AMPR, KC_ASTR, KC_TILD, _______, _______,
        _______, KC_SCLN, KC_EQL,  KC_UNDS, KC_MINS, KC_COLN, _______,         _______, KC_PLUS, KC_RSFT, KC_RCTL, KC_LALT, KC_BSLS, _______,
        _______, Euro,    _______, _______, KC_PLUS, KC_GRV,  _______,         _______, _______, _______, _______, _______, KC_PIPE, _______,
        _______, _______, _______, KC_DEL,  KC_BSPC, KC_TAB,                            _______, _______, _______, _______, _______, _______
    ),

    [_NUM] = LAYOUT(
        _______, _______, _______, KC_LBRC, KC_RBRC, _______, _______,         _______, KC_COMM, KC_7,    KC_8,    KC_9,    _______, _______,
        _______, _______, _______, KC_LPRN, KC_RPRN, _______, _______,         _______, KC_DOT,  KC_4,    KC_5,    KC_6,    _______, _______,
        _______, _______, _______, KC_LCBR, KC_RCBR, _______, _______,         _______, KC_0,    KC_1,    KC_2,    KC_3,    _______, _______,
        _______, _______, _______, KC_DEL,  KC_BSPC, KC_TAB,                            _______, _______, _______, _______, _______, _______
    ),


    [_FN] = LAYOUT(
        _______, KC_F12,  KC_F7,   KC_F8,   KC_F9,   _______, _______,         _______, L_QWE,   _______, _______, _______, L_GAM,   _______,
        _______, KC_F11,  KC_F4,   KC_F5,   KC_F6,   _______, _______,         _______, _______, KC_RSFT, KC_RCTL, KC_LALT, KC_RGUI, _______,
        _______, KC_F10,  KC_F1,   KC_F2,   KC_F3,   _______, _______,         _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______,                           _______, _______, _______, _______, _______, _______
    ),

    [_GAME] = LAYOUT(
        _______, KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    _______,         _______, KC_Y,    KC_U,    KC_I,     KC_O,    KC_P,    _______,
        _______, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    _______,         _______, KC_H,    KC_J,    KC_K,     KC_L,    KC_QUOT, _______,
        _______, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    _______,         _______, KC_N,    KC_M,    KC_COMM,  KC_DOT,  KC_SLSH, _______,
        _______, _______, _______, KC_ESC,  KC_SPC,  KC_TAB,                            KC_SPC,  KC_ENT,  L_GAM,    _______, _______,   _______
    ),
};

uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case LGUI_T(KC_A):
            return TAPPING_TERM + 80;
        case LALT_T(KC_S):
            return TAPPING_TERM + 80;
        case LCTL_T(KC_D):
            return TAPPING_TERM + 50;
        default:
            return TAPPING_TERM;
    }
}


// bool process_record_user(uint16_t keycode, keyrecord_t *record) {

//     switch (keycode) {
//         case default:
//             return true;
//             break;
//     }

//     return true;
// }

// global variables
// long before;

// void keyboard_post_init_user(void) {
 
//     // initialize variables
//     before = timer_read32();
// }

// Runs constantly in the background, in a loop.
// void matrix_scan_user(void) {
//     // only execute if on master half -> timers might be out of sync on each half
//     if (is_keyboard_master()) {

//         if ((timer_read32() - before) / 1000 > 1800) {
//             if (IS_LAYER_ON(_QWERTY)){
//                 layer_off(_QWERTY);
//             }
//             else {
//                 layer_on(_QWERTY);
//             }

//             before = timer_read32();
//         }

//     }
// };