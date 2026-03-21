// Below layout is based upon /u/That-Canadian's planck layout
#include QMK_KEYBOARD_H


// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.
enum layer_names {
    _QWERTY,
    _FUNC
};

// Fillers to make layering more clear
#define _______ KC_TRNS
#define XXXXXXX KC_NO

// Defines for task manager and such
#define UNDO LCTL(KC_Z)
#define CUT LCTL(KC_X)
#define COPY LCTL(KC_C)
#define PSTE LCTL(KC_V)
#define CALTDEL LCTL(LALT(KC_DEL))
#define TSKMGR LCTL(LSFT(KC_ESC))
#define LOCK LGUI(KC_L)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* Qwerty
 * ,-------------.  ,---------------------------.
 * |      | Undo |  | Undo |  Cut | Copy | Paste|
 * |------+------|  |------+------+------+------|
 * |      | Cut  |  |      |      | Esc  | FUNC |
 * |------+------|  `---------------------------'
 * | ESC  | Copy |
 * |------+------|
 * | FUNC | Paste|
 * `-------------'
 */
[_QWERTY] = LAYOUT(  \
    XXXXXXX,   UNDO, \
    XXXXXXX,   CUT,  \
    KC_ESC,    COPY, \
    MO(_FUNC), PSTE  \
),

/* Function
 * ,-------------.  ,---------------------------.
 * |      | CAD  |  | CAD  |TSKMGR| LOCK |      |
 * |------+------|  |------+------+------+------|
 * |      |TSKMGR|  |      |      |      |      |
 * |------+------|  `---------------------------'
 * |      | Lock |
 * |------+------|
 * |      |      |
 * `-------------'
 */
[_FUNC] = LAYOUT(     \
    XXXXXXX, CALTDEL, \
    XXXXXXX, TSKMGR,  \
    XXXXXXX, LOCK,    \
    _______, XXXXXXX  \
)

};