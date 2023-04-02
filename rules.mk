# Copyright 2023 Gyozo Gaspar
#
# This file is part of Crkbd_miryoku_6yozo.
# Crkbd_miryoku_6yozo is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
# Crkbd_miryoku_6yozo is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details.
# You should have received a copy of the GNU General Public License along with Crkbd_miryoku_6yozo. If not, see <https://www.gnu.org/licenses/>. 

$(info Executing user rules.mk)

SRC += source.c

# Build Options from miryoku
MOUSEKEY_ENABLE = yes # Maybe not necessary, but does not hurt
EXTRAKEY_ENABLE = yes # Copy / Paste works because of it?
AUTO_SHIFT_ENABLE = yes # Test and disable, I can press shift when needed NP
# TAP_DANCE_ENABLE = yes # Used by the double tap guard feature
CAPS_WORD_ENABLE = yes # This is a good feature, test with the desired layout
KEY_OVERRIDE_ENABLE = yes # Used to activate caps word which probably did not work on qmk master miryoku

# Build Options from crkbd
BOOTMAGIC_ENABLE = yes      # Enable Bootmagic Lite
MOUSEKEY_ENABLE = yes       # Mouse keys
EXTRAKEY_ENABLE = yes       # Audio control and System control
CONSOLE_ENABLE = no         # Console for debug
COMMAND_ENABLE = no         # Commands for debug and configuration
NKRO_ENABLE = yes           # Enable N-Key Rollover ### i dont need it probably
BACKLIGHT_ENABLE = no       # Enable keyboard backlight functionality
RGBLIGHT_ENABLE = no        # Enable keyboard RGB underglow
AUDIO_ENABLE = no           # Audio output
RGB_MATRIX_ENABLE = no
RGB_MATRIX_DRIVER = WS2812
LTO_ENABLE = yes
# if firmware size over limit, try this option
# LTO_ENABLE = yes
RGBLIGHT_SUPPORTED = yes
RGB_MATRIX_SUPPORTED = yes
OLED_ENABLE     = yes
OLED_DRIVER     = SSD1306

$(info Finished executing user rules.mk)
