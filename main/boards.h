#pragma once 

// Custom board
#ifdef CONFIG_VK_BOARD_CUSTOM
#include "custom_board.h"
#endif

// Olimex EVB 
#ifdef CONFIG_VK_BOARD_OLIMEX_EVB
#define ACTUATORS_GPIO { 32, 33 }
#define ACTUATORS_TOUT { 10, 10}
#define STATUS_LED_GPIO -1
#define RESET_BUTTON_GPIO 34
#endif
