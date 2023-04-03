// Copyright 2023 Gyozo Gaspar
//
// This file is part of Crkbd_miryoku_6yozo.
// Crkbd_miryoku_6yozo is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
// Crkbd_miryoku_6yozo is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details.
// You should have received a copy of the GNU General Public License along with Crkbd_miryoku_6yozo. If not, see <https://www.gnu.org/licenses/>. 
#include QMK_KEYBOARD_H

#ifdef KEY_OVERRIDE_ENABLE
const key_override_t lesser_than_override = ko_make_with_layers(MOD_MASK_SHIFT, KC_COMM, RALT(KC_NUBS), 0b000001);
const key_override_t greater_than_override = ko_make_with_layers(MOD_MASK_SHIFT, KC_DOT, RALT(KC_Z), 0b000001);
const key_override_t slash_override = ko_make_with_layers_and_negmods(0, KC_SLSH, LSFT(KC_6), 0b000001, MOD_MASK_SHIFT);
const key_override_t question_override = ko_make_with_layers(MOD_MASK_SHIFT, KC_SLSH, LSFT(KC_COMM), 0b000001);
const key_override_t apostrophe_override = ko_make_with_layers_and_negmods(0, KC_GRV, LSFT(KC_1), 0b000001, MOD_MASK_SHIFT);
const key_override_t double_quote_override = ko_make_with_layers(MOD_MASK_SHIFT, KC_GRV, LSFT(KC_2), 0b000001);
const key_override_t bracket_open_override_num = ko_make_with_layers_and_negmods(0, KC_F1, RALT(KC_F), 0b010000, MOD_MASK_SHIFT);
const key_override_t brace_open_override_num = ko_make_with_layers(MOD_MASK_SHIFT, KC_F1, RALT(KC_B), 0b010000);
const key_override_t semicolon_override_num = ko_make_with_layers_and_negmods(0, KC_F2, RALT(KC_COMM), 0b010000, MOD_MASK_SHIFT);
const key_override_t colon_override_num = ko_make_with_layers(MOD_MASK_SHIFT, KC_F2, LSFT(KC_DOT), 0b010000);
const key_override_t backtick_override_num = ko_make_with_layers_and_negmods(0, KC_F3, RALT(KC_7), 0b010000, MOD_MASK_SHIFT);
const key_override_t tilde_override_num = ko_make_with_layers(MOD_MASK_SHIFT, KC_F3, RALT(KC_1), 0b010000);
const key_override_t ampersand_override_num = ko_make_with_layers(MOD_MASK_SHIFT, KC_7, RALT(KC_C), 0b010000);
const key_override_t dollar_override_num = ko_make_with_layers(MOD_MASK_SHIFT, KC_4, RALT(KC_SCLN), 0b010000);
const key_override_t exclamation_override_num = ko_make_with_layers(MOD_MASK_SHIFT, KC_1, LSFT(KC_4), 0b010000);
const key_override_t star_override_num = ko_make_with_layers(MOD_MASK_SHIFT, KC_8, RALT(KC_SLSH), 0b010000);
const key_override_t percent_override_num = ko_make_with_layers(MOD_MASK_SHIFT, KC_5, LSFT(KC_5), 0b010000);
const key_override_t at_override_num = ko_make_with_layers(MOD_MASK_SHIFT, KC_2, RALT(KC_V), 0b010000);
const key_override_t parenthesis_open_override_num = ko_make_with_layers(MOD_MASK_SHIFT, KC_9, LSFT(KC_8), 0b010000);
const key_override_t caret_override_num = ko_make_with_layers(MOD_MASK_SHIFT, KC_6, RALT(KC_3), 0b010000); //This is a dead key on a hungarian layout
const key_override_t hash_mark_override_num = ko_make_with_layers(MOD_MASK_SHIFT, KC_3, RALT(KC_X), 0b010000);
const key_override_t bracket_close_override_num = ko_make_with_layers_and_negmods(0, KC_F4, RALT(KC_G), 0b010000, MOD_MASK_SHIFT);
const key_override_t brace_close_override_num = ko_make_with_layers(MOD_MASK_SHIFT, KC_F4, RALT(KC_N), 0b010000);
const key_override_t euals_override_num = ko_make_with_layers_and_negmods(0, KC_F5, LSFT(KC_7), 0b010000, MOD_MASK_SHIFT);
const key_override_t plus_override_num = ko_make_with_layers(MOD_MASK_SHIFT, KC_F5, LSFT(KC_3), 0b010000);
const key_override_t backslash_override_num = ko_make_with_layers_and_negmods(0, KC_F6, RALT(KC_Q), 0b010000, MOD_MASK_SHIFT);
const key_override_t pipe_override_num = ko_make_with_layers(MOD_MASK_SHIFT, KC_F6, RALT(KC_W), 0b010000);
const key_override_t greater_than_override_num = ko_make_with_layers(MOD_MASK_SHIFT, KC_DOT, RALT(KC_Z), 0b010000);
const key_override_t parenthesis_close_override_num = ko_make_with_layers(MOD_MASK_SHIFT, KC_GRV, LSFT(KC_9), 0b010000);


// This globally defines all key overrides to be used
const key_override_t **key_overrides = (const key_override_t *[]){
	&lesser_than_override,
	&greater_than_override,
	&slash_override,
	&question_override,
	&apostrophe_override,
	&double_quote_override,
	&bracket_open_override_num,
	&brace_open_override_num,
	&semicolon_override_num,
	&colon_override_num,
	&backtick_override_num,
	&tilde_override_num,
	&ampersand_override_num,
	&dollar_override_num,
	&exclamation_override_num,
	&star_override_num,
	&percent_override_num,
	&at_override_num,
	&parenthesis_open_override_num,
	&caret_override_num,
	&hash_mark_override_num,
	&bracket_close_override_num,
	&brace_close_override_num,
	&euals_override_num,
	&plus_override_num,
	&backslash_override_num,
	&pipe_override_num,
	&greater_than_override_num,
	&parenthesis_close_override_num,
	NULL // Null terminate the array of overrides!
};
#endif

// Based on qmk_firmware\keyboards\crkbd\keymaps\default

#ifdef OLED_ENABLE
oled_rotation_t oled_init_user(oled_rotation_t rotation) {
  if (!is_keyboard_master()) {
    return OLED_ROTATION_180;  // flips the display 180 degrees if offhand
  }
  return rotation;
}

#define L_BASE 0
#define L_LOWER 2
#define L_RAISE 4
#define L_ADJUST 8

void oled_render_layer_state(void) {
    oled_write_P(PSTR("Layer: "), false);
    switch (layer_state) {
        case L_BASE:
            oled_write_ln_P(PSTR("Default"), false);
            break;
        case L_LOWER:
            oled_write_ln_P(PSTR("Lower"), false);
            break;
        case L_RAISE:
            oled_write_ln_P(PSTR("Raise"), false);
            break;
        case L_ADJUST:
        case L_ADJUST|L_LOWER:
        case L_ADJUST|L_RAISE:
        case L_ADJUST|L_LOWER|L_RAISE:
            oled_write_ln_P(PSTR("Adjust"), false);
            break;
    }
}


char keylog_str[24] = {};

const char code_to_name[60] = {
    ' ', ' ', ' ', ' ', 'a', 'b', 'c', 'd', 'e', 'f',
    'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p',
    'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z',
    '1', '2', '3', '4', '5', '6', '7', '8', '9', '0',
    'R', 'E', 'B', 'T', '_', '-', '=', '[', ']', '\\',
    '#', ';', '\'', '`', ',', '.', '/', ' ', ' ', ' '};

void set_keylog(uint16_t keycode, keyrecord_t *record) {
  char name = ' ';
    if ((keycode >= QK_MOD_TAP && keycode <= QK_MOD_TAP_MAX) ||
        (keycode >= QK_LAYER_TAP && keycode <= QK_LAYER_TAP_MAX)) { keycode = keycode & 0xFF; }
  if (keycode < 60) {
    name = code_to_name[keycode];
  }

  // update keylog
  snprintf(keylog_str, sizeof(keylog_str), "%dx%d, k%2d : %c",
           record->event.key.row, record->event.key.col,
           keycode, name);
}

void oled_render_keylog(void) {
    oled_write(keylog_str, false);
}

void render_bootmagic_status(bool status) {
    /* Show Ctrl-Gui Swap options */
    static const char PROGMEM logo[][2][3] = {
        {{0x97, 0x98, 0}, {0xb7, 0xb8, 0}},
        {{0x95, 0x96, 0}, {0xb5, 0xb6, 0}},
    };
    if (status) {
        oled_write_ln_P(logo[0][0], false);
        oled_write_ln_P(logo[0][1], false);
    } else {
        oled_write_ln_P(logo[1][0], false);
        oled_write_ln_P(logo[1][1], false);
    }
}

void oled_render_logo(void) {
    static const char PROGMEM crkbd_logo[] = {
        0x80, 0x81, 0x82, 0x83, 0x84, 0x85, 0x86, 0x87, 0x88, 0x89, 0x8a, 0x8b, 0x8c, 0x8d, 0x8e, 0x8f, 0x90, 0x91, 0x92, 0x93, 0x94,
        0xa0, 0xa1, 0xa2, 0xa3, 0xa4, 0xa5, 0xa6, 0xa7, 0xa8, 0xa9, 0xaa, 0xab, 0xac, 0xad, 0xae, 0xaf, 0xb0, 0xb1, 0xb2, 0xb3, 0xb4,
        0xc0, 0xc1, 0xc2, 0xc3, 0xc4, 0xc5, 0xc6, 0xc7, 0xc8, 0xc9, 0xca, 0xcb, 0xcc, 0xcd, 0xce, 0xcf, 0xd0, 0xd1, 0xd2, 0xd3, 0xd4,
        0};
    oled_write_P(crkbd_logo, false);
}

bool oled_task_user(void) {
    if (is_keyboard_master()) {
        oled_render_layer_state();
        oled_render_keylog();
    } else {
        oled_render_logo();
    }
    return false;
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  if (record->event.pressed) {
    set_keylog(keycode, record);
  }
  return true;
}
#endif // OLED_ENABLE
