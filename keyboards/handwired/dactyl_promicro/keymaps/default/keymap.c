// Copyright 2023 %YOUR_FULL_NAME% (@%YOUR_GITHUB_USERNAME%)
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        KC_NLCK, KC_7,    KC_8,    KC_9,
        KC_B,    KC_4,    KC_5,    KC_6,
        KC_A,    KC_1,    KC_2,    KC_3
    )
};
