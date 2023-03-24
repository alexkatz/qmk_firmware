#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {[0] = LAYOUT_split_3x5_2(KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, LSFT_T(KC_A), LCTL_T(KC_S), LALT_T(KC_D), LGUI_T(KC_F), KC_G, KC_H, RGUI_T(KC_J), RALT_T(KC_K), RCTL_T(KC_L), RSFT_T(KC_SCLN), KC_Z, KC_X, KC_C, LT(3, KC_V), KC_B, KC_N, LT(3, KC_M), KC_COMM, KC_DOT, KC_SLSH, LT(1, KC_BSPC), LT(2, KC_TAB), LT(1, KC_ENT), LT(2, KC_SPC)),
                                                              [1] = LAYOUT_split_3x5_2(KC_PPLS, KC_P7, KC_P8, KC_P9, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, LSFT_T(KC_PMNS), LCTL_T(KC_P4), LALT_T(KC_P5), LGUI_T(KC_P6), KC_NO, KC_LEFT, RGUI_T(KC_DOWN), RALT_T(KC_UP), RCTL_T(KC_RGHT), KC_EXLM, KC_P0, KC_P1, KC_P2, KC_P3, KC_PDOT, KC_NO, KC_NO, KC_COMM, KC_DOT, KC_QUES, KC_BSPC, KC_TAB, KC_ENT, KC_SPC),
                                                              [2] = LAYOUT_split_3x5_2(KC_GRV, KC_AT, KC_COLN, KC_DLR, KC_CIRC, KC_NO, KC_LPRN, KC_RPRN, KC_NO, KC_BSLS, LSFT_T(KC_TILD), LCTL_T(KC_LT), LALT_T(KC_PEQL), LGUI_T(KC_GT), KC_PERC, KC_NO, RGUI_T(KC_LCBR), RALT_T(KC_RCBR), RCTL_T(KC_QUOT), RSFT_T(KC_DQUO), KC_UNDS, KC_ASTR, KC_AMPR, KC_PIPE, KC_HASH, KC_NO, KC_LBRC, KC_RBRC, KC_NO, KC_NO, KC_BSPC, KC_TAB, KC_ENT, KC_SPC),
                                                              [3] = LAYOUT_split_3x5_2(KC_NO, KC_BRIU, KC_MUTE, KC_VOLU, KC_NO, KC_NO, KC_VOLU, KC_MUTE, KC_BRIU, KC_NO, RSFT_T(KC_NO), KC_BRID, KC_ESC, KC_VOLD, KC_NO, KC_NO, KC_VOLD, KC_ESC, KC_BRID, LSFT_T(KC_NO), KC_SLEP, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_SLEP, KC_ENT, KC_SPC, KC_BSPC, KC_TAB)};

void keyboard_pre_init_user(void) {
    // Set our LED pin as output
    setPinOutput(24);
    // Turn the LED off
    // (Due to technical reasons, high is off and low is on)
    writePinHigh(24);
}

#if defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {

};
#endif // defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)
