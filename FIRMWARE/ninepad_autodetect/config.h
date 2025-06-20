
//#define NO_ACTION_ONESHOT


/* key matrix size */
#define MATRIX_ROWS 3
#define MATRIX_COLS 3

/* Keyboard Matrix Assignments */
#define DIRECT_PINS { \
    { B9, B8, B7}, \
    { B4, B5, B6}, \
    { B3, A7, A6} \
}
/* Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed */
#define DEBOUNCE 5

#define ENCODERS_PAD_A {B1}
#define ENCODERS_PAD_B {B0}
//#define ENCODER_DIRECTION_FLIP
#define ENCODER_RESOLUTIONS {4}



/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
//#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

#define FORCE_NKRO

