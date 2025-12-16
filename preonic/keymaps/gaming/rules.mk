# key setting to activate keys instantly upon pressing
DEBOUNCE_TYPE = sym_eager_pk

# enable nkro
NKRO_ENABLE = yes

# link time optimization -> faster code
LTO_ENABLE = yes               # Link Time Optimization (Makes code run faster)

# remove bloat

# usb extras
CONSOLE_ENABLE = no
COMMAND_ENABLE = no
MOUSEKEY_ENABLE = no

# rgb
RGBLIGHT_ENABLE = no
RGB_MATRIX_ENABLE = no
LED_MATRIX_ENABLE = no
BACKLIGHT_ENABLE = no

# audio
AUDIO_ENABLE = no

MOUSEKEY_ENABLE = no
EXTRAKEY_ENABLE = yes
CONSOLE_ENABLE = no
COMMAND_ENABLE = no
SLEEP_LED_ENABLE = no
MIDI_ENABLE = no

# old functions
OPT_DEFS += -DNO_ACTION_MACRO
OPT_DEFS += -DNO_ACTION_FUNCTION
