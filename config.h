// Copyright 2023 Gyozo Gaspar
//
// This file is part of Crkbd_miryoku_6yozo.
// Crkbd_miryoku_6yozo is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
// Crkbd_miryoku_6yozo is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details.
// You should have received a copy of the GNU General Public License along with Crkbd_miryoku_6yozo. If not, see <https://www.gnu.org/licenses/>. 

#pragma once

// Already defined:
//   #define NO_DEBUG          // disable debugging
//   #define NO_PRINT          // disable printing/debugging using hid_listen
// Do not want to disable:
//   #define NO_ACTION_LAYER   // disable layers
//   #define NO_ACTION_ONESHOT // disable one-shot modifiers
//   #define NO_ACTION_TAPPING // disable tap dance and other tapping features, ex: cannot change layers

// status indicators to show which keyboard layer is currently active
#define RGBLIGHT_LAYERS

// Configure caps word
#define BOTH_SHIFTS_TURNS_ON_CAPS_WORD

// Based on qmk_firmware\keyboards\crkbd\keymaps\default

#define MASTER_LEFT

#ifdef RGBLIGHT_ENABLE
    #define RGBLIGHT_EFFECT_BREATHING
    #undef RGBLIGHT_EFFECT_RAINBOW_MOOD
    #undef RGBLIGHT_EFFECT_RAINBOW_SWIRL
    #undef RGBLIGHT_EFFECT_SNAKE
    #undef RGBLIGHT_EFFECT_KNIGHT
    #undef RGBLIGHT_EFFECT_CHRISTMAS
    #undef RGBLIGHT_EFFECT_STATIC_GRADIENT
    #undef RGBLIGHT_EFFECT_RGB_TEST
    #undef RGBLIGHT_EFFECT_ALTERNATING
    #undef RGBLIGHT_EFFECT_TWINKLE
//    #define RGBLIGHT_LIMIT_VAL 120
//    #define RGBLIGHT_HUE_STEP 10
//    #define RGBLIGHT_SAT_STEP 17
//    #define RGBLIGHT_VAL_STEP 17
#endif

#define OLED_FONT_H "keyboards/crkbd/lib/glcdfont.c"
