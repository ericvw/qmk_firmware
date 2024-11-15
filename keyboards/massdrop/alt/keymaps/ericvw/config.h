#pragma once

// Disable control of the RGB matrix via keycodes to avoid EEPROM writes.
#define RGB_MATRIX_DISABLE_KEYCODES

// Turn off effects when suspended.
#define RGB_MATRIX_SLEEP

// Turn off lights after 10 minutes, similar to my display's timeout.
#define RGB_MATRIX_TIMEOUT 10 * 60000
