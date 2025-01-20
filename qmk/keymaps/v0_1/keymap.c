// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───┬───┬───┬───┐
     * │ Q │ W │ E │ R │
     * ├───┼───┼───┼───┤
     * │ A │ S │ D │ F │
     * ├───┼───┼───┼───┤
     * │ Z │ X │ C │ V │
     * ├───┼───┼───┼───┤
     * │T_1│ . │Ent│SPC│
     * └───┴───┴───┴───┘
     */
    [0] = LAYOUT_ortho_4x4(
        KC_Q,   KC_W,   KC_E,   KC_R,
        KC_A,   KC_S,   KC_D,   KC_F,
        KC_Z,   KC_X,   KC_C,   KC_V,
        TO(1),   KC_DOT, KC_ENT, KC_SPC
    ),
    /*
     * ┌───┬───┬───┬───┐
     * │ 7 │ 8 │ 9 │ / │
     * ├───┼───┼───┼───┤
     * │ 4 │ 5 │ 6 │ * │
     * ├───┼───┼───┼───┤
     * │ 1 │ 2 │ 3 │ - │
     * ├───┼───┼───┼───┤
     * │ 0 │ . │T_0│ + │
     * └───┴───┴───┴───┘
     */
    [1] = LAYOUT_ortho_4x4(
        KC_7,   KC_8,   KC_9,   KC_PSLS,
        KC_4,   KC_5,   KC_6,   KC_PAST,
        KC_1,   KC_2,   KC_3,   KC_PMNS,
        KC_0,  KC_PDOT, TO(0), KC_PPLS
    )
};
