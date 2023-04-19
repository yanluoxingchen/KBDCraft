
#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_all(
		KC_5, RGB_TOG, KC_7, KC_0, KC_0, KC_0, KC_0, KC_0, KC_0, KC_0, KC_0, KC_0, KC_0, KC_0, KC_0, KC_0,  
		RGB_MOD, KC_1, KC_1, KC_1, KC_1, KC_1, KC_1, KC_1, KC_1, KC_1, KC_1, KC_1, KC_1, KC_1, KC_1, KC_1, 
		KC_2, KC_2, KC_2, KC_2, KC_2, KC_2, KC_2, KC_2, KC_2, KC_2, KC_2, KC_2, KC_2, KC_2, KC_2, KC_2,  
		KC_3, KC_3, KC_3, KC_3, KC_3, KC_3, KC_3, KC_3, KC_3, KC_3, KC_3, KC_3, KC_3, KC_3, KC_3, KC_3
    )
};
