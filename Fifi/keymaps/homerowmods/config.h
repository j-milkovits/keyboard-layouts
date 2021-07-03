#pragma once

/* Use I2C or Serial, not both */

#define USE_SERIAL
// #define USE_I2C

/* Select hand configuration */

#define MASTER_LEFT
// #define MASTER_RIGHT
// #define EE_HANDS

#undef RGBLED_NUM
// #define RGBLIGHT_ANIMATIONS
// #define RGBLED_NUM 14
// #define RGBLIGHT_HUE_STEP 8
// #define RGBLIGHT_SAT_STEP 8
// #define RGBLIGHT_VAL_STEP 8


// Home Row Mods - Configuration
#define TAPPING_TERM 180
#define TAPPING_TERM_PER_KEY

// Prevent normal rollover on alphas form accidentally triggering mods
// -> if another key is still being pressed, when already pressing a new key
#define IGNORE_MOD_TAP_INTERRUPT

// Apply modifier on keys that are tapped during a short hold of a modtap
// -> activates nested key usage, no matter how long the tapping_term
//#define PERMISSIVE_HOLD

// Enable rapid switch from tap to hold, disables double tap auto-repeat
// -> no tttttttttt when double-pressing and holding mods
#define TAPPING_FORCE_HOLD

#define NO_ACTION_ONESHOT
