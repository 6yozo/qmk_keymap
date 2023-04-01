# Copyright 2023 Gyozo Gaspar
#
# This file is part of Crkbd_miryoku_6yozo.
# Crkbd_miryoku_6yozo is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
# Crkbd_miryoku_6yozo is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details.
# You should have received a copy of the GNU General Public License along with Crkbd_miryoku_6yozo. If not, see <https://www.gnu.org/licenses/>. 

SRC += source.c

# Settings from miryoku
MOUSEKEY_ENABLE = yes # Maybe not necessary, but does not hurt
EXTRAKEY_ENABLE = yes # Copy / Paste works because of it
AUTO_SHIFT_ENABLE = yes # Test and disable, I can press shift when needed NP
# TAP_DANCE_ENABLE = yes # Used by the double tap guard feature
CAPS_WORD_ENABLE = yes # This is a good feature, test with the desired layout
KEY_OVERRIDE_ENABLE = yes # Used to activate caps word which probably did not work on qmk master miryoku
