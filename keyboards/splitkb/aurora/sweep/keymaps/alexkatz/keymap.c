/* Copyright 2022 splitkb.com <support@splitkb.com>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {[0] = LAYOUT_split_3x5_2(KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, LSFT_T(KC_A), LCTL_T(KC_S), LALT_T(KC_D), LGUI_T(KC_F), KC_G, KC_H, RGUI_T(KC_J), RALT_T(KC_K), RCTL_T(KC_L), RSFT_T(KC_SCLN), KC_Z, KC_X, KC_C, LT(3, KC_V), KC_B, KC_N, LT(3, KC_M), KC_COMM, KC_DOT, KC_SLSH, LT(1, KC_BSPC), LT(2, KC_TAB), LT(1, KC_ENT), LT(2, KC_SPC)),
                                                              [1] = LAYOUT_split_3x5_2(KC_PPLS, KC_P7, KC_P8, KC_P9, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, LSFT_T(KC_PMNS), LCTL_T(KC_P4), LALT_T(KC_P5), LGUI_T(KC_P6), KC_NO, KC_LEFT, RGUI_T(KC_DOWN), RALT_T(KC_UP), RCTL_T(KC_RGHT), RSFT_T(KC_EXLM), KC_P0, KC_P1, KC_P2, KC_P3, KC_PDOT, KC_NO, KC_NO, KC_TRNS, KC_TRNS, KC_QUES, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
                                                              [2] = LAYOUT_split_3x5_2(KC_GRV, KC_AT, KC_COLN, KC_DLR, KC_CIRC, KC_NO, KC_LPRN, KC_RPRN, KC_NO, KC_BSLS, LSFT_T(KC_TILD), LCTL_T(KC_LT), LALT_T(KC_PEQL), LGUI_T(KC_GT), KC_PERC, KC_NO, RGUI_T(KC_LCBR), RALT_T(KC_RCBR), RCTL_T(KC_QUOT), RSFT_T(KC_DQUO), KC_UNDS, KC_ASTR, KC_AMPR, KC_PIPE, KC_HASH, KC_NO, KC_LBRC, KC_RBRC, KC_NO, KC_NO, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
                                                              [3] = LAYOUT_split_3x5_2(EE_CLR, KC_BRIU, KC_MUTE, KC_VOLU, KC_NO, KC_NO, KC_VOLU, KC_MUTE, KC_BRIU, QK_BOOT, RSFT_T(KC_NO), KC_BRID, KC_ESC, KC_VOLD, KC_NO, KC_NO, KC_VOLD, KC_ESC, KC_BRID, LSFT_T(KC_NO), KC_SLEP, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_SLEP, KC_ENT, KC_SPC, KC_BSPC, KC_TAB)};

// turns off liatris onboard LED
void keyboard_pre_init_user(void) {
    // Set our LED pin as output
    setPinOutput(24);
    // Turn the LED off
    // (Due to technical reasons, high is off and low is on)
    writePinHigh(24);
}

// overriding to allow for shifted keys within mod tap
bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case RSFT_T(KC_EXLM):
            if (record->tap.count && record->event.pressed) {
                tap_code16(KC_EXLM);
                return false;
            }
            break;
        case RSFT_T(KC_DQUO):
            if (record->tap.count && record->event.pressed) {
                tap_code16(KC_DQUO);
                return false;
            }
            break;
        case RGUI_T(KC_LCBR):
            if (record->tap.count && record->event.pressed) {
                tap_code16(KC_LCBR);
                return false;
            }
            break;
        case RALT_T(KC_RCBR):
            if (record->tap.count && record->event.pressed) {
                tap_code16(KC_RCBR);
                return false;
            }
            break;
        case LSFT_T(KC_TILD):
            if (record->tap.count && record->event.pressed) {
                tap_code16(KC_TILD);
                return false;
            }
            break;
        case LCTL_T(KC_LT):
            if (record->tap.count && record->event.pressed) {
                tap_code16(KC_LT);
                return false;
            }
            break;
        case LGUI_T(KC_GT):
            if (record->tap.count && record->event.pressed) {
                tap_code16(KC_GT);
                return false;
            }
            break;
    }
    return true;
}

#if defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {

};
#endif // defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)
