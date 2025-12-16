#pragma once

// force 1000Hz polling (1ms latency) (default: 10)
#define USB_POLLING_INTERVAL_MS 1

// optimized sleep for faster scanning (default: 30)
#define MATRIX_IO_DELAY 15

#define FORCE_NKRO

// noise safety window, no additional latency
#define DEBOUNCE 5

#define NO_MUSIC_MODE
