#include QMK_KEYBOARD_H

enum layer_names {
  _MEDIA,
  _BROWSER,
  _MACRO,
  _RGBLIGHTS
};

#define LAYOUT_via( \
    K00, K01, K02,\
    K10, K11, K12,\
    K20, K21, K22 \
) \
{ \
    { K00, K01, K02}, \
    { K10, K11, K12},  \
    { K20, K21, K22}  \
}


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_MEDIA] = LAYOUT_via(
        KC_A, KC_B, KC_C,
        KC_D, KC_E, KC_F,
        KC_G, KC_H, KC_I
    ),
    [_BROWSER] = LAYOUT_via(
        KC_A, KC_A, KC_A,
        KC_A, KC_A, KC_A,
        KC_A, KC_A, KC_A
    ),
    [_MACRO] = LAYOUT_via(
        KC_A, KC_A, KC_A,
        KC_A, KC_A, KC_A,
        KC_A, KC_A, KC_A
    ),
    [_RGBLIGHTS] = LAYOUT_via(
        KC_A, KC_A, KC_A,
        KC_A, KC_A, KC_A,
        KC_A, KC_A, KC_A
    ),

};
#ifdef ENCODER_MAP_ENABLE
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
    [_MEDIA] = { ENCODER_CCW_CW(KC_MPRV, KC_MNXT)},
    [_MACRO]   = { ENCODER_CCW_CW(KC_TRNS, KC_TRNS)},
    [_MACRO]  = { ENCODER_CCW_CW(KC_TRNS, KC_TRNS)},
    [_RGBLIGHTS]  = { ENCODER_CCW_CW(KC_TRNS, KC_TRNS)},
};
#endif
