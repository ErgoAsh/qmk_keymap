SRC += ergoash.c

SPLIT_KEYBOARD  = yes
KEY_OVERRIDE_ENABLE = yes
CAPS_WORD_ENABLE = yes
SEND_STRING_ENABLE = yes
MOUSEKEY_ENABLE = yes

RGBLIGHT_ENABLE = no    # Enable WS2812 RGB underlight.
OLED_ENABLE     = no
OLED_DRIVER     = SSD1306

LTO_ENABLE      = no    # Enable Link Time Optimization for saving space
COMMAND_ENABLE   = no    # Disable commands for debug and configuration
