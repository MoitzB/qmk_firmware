/*
Copyright 2019 @foostan
Copyright 2020 Drashna Jaelre <@drashna>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT_split_3x6_3(KC_ESC, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_LCTL, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_MINS, LSFT_T(KC_TAB), KC_LGUI, TT(1), KC_BSPC, KC_SPC, RSFT_T(KC_ENT)),
	[1] = LAYOUT_split_3x6_3(KC_ESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_BSPC, KC_LCTL, KC_NUHS, KC_NUBS, LSFT(KC_8), LSFT(KC_9), LSFT(KC_NUBS), KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, KC_RCTL, KC_DEL, KC_LSFT, KC_RBRC, RALT(KC_7), RALT(KC_8), RALT(KC_9), RALT(KC_0), KC_GRV, KC_MINS, KC_EQL, KC_LALT, KC_RALT, KC_RSFT, KC_TRNS, KC_TRNS, KC_TRNS, LT(2,KC_BSPC), LT(3,KC_SPC), LT(4,KC_ENT)),
	[2] = LAYOUT_split_3x6_3(KC_ESC, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, LSFT(KC_NUHS), LSFT(KC_2), LSFT(KC_EQL), KC_EQL, RALT(KC_MINS), KC_BSPC, KC_LCTL, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, LSFT(KC_4), LCTL(KC_7), LSFT(KC_0), LSFT(KC_6), LSFT(KC_5), KC_ENT, KC_LSFT, KC_F11, KC_F12, KC_F13, KC_F14, KC_F15, KC_COMM, KC_DOT, LSFT(KC_MINS), LSFT(KC_1), RALT(KC_NUBS), KC_RSFT, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
    [3] = LAYOUT_split_3x6_3(KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_P7, KC_P8, KC_P9, KC_PPLS, KC_PMNS, KC_BSPC, KC_NO, KC_NUM, KC_NO, KC_NO, KC_NO, KC_P0, KC_P4, KC_P5, KC_P6, KC_PAST, KC_PSLS, KC_ENT, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_P0, KC_P1, KC_P2, KC_P3, KC_PCMM, KC_PEQL, KC_SPC, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
	[4] = LAYOUT_split_3x6_3(KC_MUTE, KC_VOLD, KC_VOLU, KC_BRID, KC_BRIU, KC_NO, KC_WH_U, KC_BTN1, KC_BTN2, KC_BTN3, KC_NO, KC_NO, RGB_TOG, RGB_HUI, RGB_SAI, RGB_VAI, RGB_SPI, KC_NO, KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R, KC_NO, KC_NO, RGB_MOD, RGB_HUD, RGB_SAD, RGB_VAD, RGB_SPD, KC_NO, KC_WH_D, KC_WH_L, KC_WH_R, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS)

};

#ifdef RGBLIGHT_ENABLE
void keyboard_post_init_user(void) {
  rgblight_enable_noeeprom(); // enables RGB, without saving settings
  rgblight_sethsv_noeeprom(HSV_BLUE); // sets the color to red without saving
  rgblight_mode_noeeprom(RGB_MODE_RAINBOW_MOOD); // sets mode to Fast breathing without saving
}
#endif
