static const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* Keymap 0: Default Layer
     *
     * ,--------------------------------------------------.           ,--------------------------------------------------.
     * |   ~    |   1  |   2  |   3  |   4  |   5  |   \  |           |   '  |   6  |   7  |   8  |   9  |   0  |   =    |
     * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
     * | Tab    |   Q  |   W  |   E  |   R  |   T  | ~Fn1 |           | ~Fn3 |   Y  |   U  |   I  |   O  |   P  |   [    |
     * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
     * | LCtrl  |   A  |   S  |   D  |   F  |   G  |------|           |------|   H  |   J  |   K  |   L  |   ;  | RShift |
     * |--------+------+------+------+------+------|  Fn0 |           | ~Fn4 |------+------+------+------+------+--------|
     * |        |   Z  |   X  |   C  |   V  |   B  |      |           |      |   N  |   M  |   ,  |   .  |   /  | RCtrl  |
     * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
     *   |      |      |      | LAlt | LGui |                                       |  Lft |  Up  |  Dn  | Rght | ~Fn4 |
     *   `----------------------------------'                                       `----------------------------------'
     *                                        ,-------------.       ,-------------.
     *                                        | +Fn2 | Home |       | PgUp | Del  |
     *                                 ,------|------|------|       |------+------+------.
     *                                 |      |      |  End |       | PgDn |      |      |
     *                                 | BkSp |  ESC |------|       |------| Enter| Space|
     *                                 |      |      |  Spc |       | Ins  |      |      |
     *                                 `--------------------'       `--------------------'
     */

    KEYMAP(  // layout: layer 0: default
        // left hand
          NO,    1,    2,    3,    4,    5,   NO,
         TAB, QUOT, COMM,  DOT,    P,    Y,  TAB,
        VOLU,    A,    O,    E,    U,    I,
        VOLD, SCLN,    Q,    J,    K,    X,  ENT,
        MUTE,   NO,   NO,  FN3, LGUI,
                                       DEL,  FN5,
                                              NO,
                                 FN9,  FN6,  FN1,
        // right hand
              NO,    6,    7,    8,    9,    0,   NO,
            BSPC,    F,    G,    C,    R,    L,   NO,
                     D,    H,    T,    N,    S, MINS,
             ENT,    B,    M,    W,    V,    Z,   NO,
                        LGUI,  FN3,   NO,   NO,   NO,
              NO,  INS,
              NO,
            LALT,  FN8,  FN4
    ),

    KEYMAP(  // layout: layer 1: Punctuation
        // left hand
          NO, TRNS, TRNS, TRNS, TRNS, TRNS,   NO,
        TRNS, FN24, FN25, FN26,  EQL, FN22, TRNS,
          NO, FN27, BSLS, SLSH, MINS, FN20,
          NO, FN28,  GRV, FN29, FN30, LBRC, TRNS,
          NO,   NO,   NO, TRNS, TRNS,
                                      TRNS,   NO,
                                              NO,
                                TRNS, TRNS, TRNS,
        // right hand
              NO, TRNS, TRNS, TRNS, TRNS, TRNS,   NO,
            TRNS, FN23, TRNS, TRNS, TRNS, TRNS,   NO,
                  FN21, FN10, FN10, FN10, FN10,   NO,
            TRNS, RBRC, FN31, FN19,   NO,   NO,   NO,
                        TRNS, TRNS,   NO,   NO,   NO,
              NO, TRNS,
              NO,
            TRNS, TRNS, TRNS
    ),

    KEYMAP(  // layout: layer 2: mouse + numpad
        // left hand
        TRNS,NO,  NO,  NO,  NO,  PAUS,PSCR,
        TRNS,WH_L,WH_U,WH_D,WH_R,BTN2,TRNS,
        TRNS,MS_L,MS_U,MS_D,MS_R,BTN1,
        TRNS,NO,  NO,  NO,  NO,  BTN3,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,
                                      TRNS,TRNS,
                                           TRNS,
                                 TRNS,TRNS,TRNS,
        // right hand
             SLCK,NLCK,PSLS,PAST,PAST,PMNS,BSPC,
             TRNS,NO,  P7,  P8,  P9,  PMNS,BSPC,
                  NO,  P4,  P5,  P6,  PPLS,PENT,
             TRNS,NO,  P1,  P2,  P3,  PPLS,PENT,
                       P0,  PDOT,SLSH,PENT,PENT,
        TRNS,TRNS,
        TRNS,
        TRNS,TRNS,TRNS
    ),

    KEYMAP(  // layout: layer 3: F-keys only
        // left hand
         FN7,   F1,   F2,   F3,   F4,   F5,   F6,
        TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS,
        TRNS, TRNS, TRNS, TRNS, TRNS, TRNS,
        TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS,
        TRNS, TRNS, TRNS, TRNS, TRNS,
                                      TRNS, TRNS,
                                            TRNS,
                                TRNS, TRNS, TRNS,
        // right hand
              F7,   F8,   F9, FN10, FN11, FN12, TRNS,
            TRNS, TRNS, TRNS, MUTE, MPLY, TRNS, TRNS,
                  TRNS, MPRV, VOLD, VOLU, MNXT, TRNS,
            TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS,
                        TRNS, TRNS, TRNS, TRNS, TRNS,
            TRNS, TRNS,
            TRNS,
            TRNS, TRNS, TRNS
    ),

    KEYMAP(  // layout: layer 4: F-keys + cursor
        // left hand
        TRNS,F1,  F2,  F3,  F4,  F5,  F6,
        FN7, NO,  PGUP,UP,  PGDN,PGUP,TRNS,
        TRNS,NO,  LEFT,DOWN,RGHT,PGDN,
        TRNS,NO,  NO,  END, HOME,NO,  TRNS,
        FN5, TRNS,TRNS,LALT,LGUI,
                                      TRNS,TRNS,
                                           TRNS,
                                 LCTL,LSFT,TRNS,
        // right hand
             F7,  F8,  F9,  F10, F11, F12, MINS,
             TRNS,PGUP,PGUP,UP,  PGDN,NO,  FN7,
                  PGDN,LEFT,DOWN,RGHT,NO,  TRNS,
             TRNS,NO,  HOME,END, NO,  NO,  TRNS,
                       RGUI,RALT,TRNS,TRNS,TRNS,
        TRNS,TRNS,
        TRNS,
        TRNS,RSFT,RCTL
    ),

    KEYMAP(  // layout: layer 5: Workman layout
        // left hand
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,Q,   D,   R,   W,   B,   TRNS,
        TRNS,A,   S,   H,   T,   G,
        TRNS,Z,   X,   M,   C,   V,   TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,
                                      TRNS,TRNS,
                                           TRNS,
                                 TRNS,TRNS,TRNS,
        // right hand
             TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
             TRNS,J,   F,   U,   P,   4,   TRNS,
                  Y,   N,   E,   O,   I,   TRNS,
             TRNS,K,   L,   TRNS,TRNS,TRNS,TRNS,
                       TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,
        TRNS,
        TRNS,TRNS,TRNS
    ),

/*
    KEYMAP(  // layout: layer N: transparent on edges, all others are empty
        // left hand
        TRNS,NO,  NO,  NO,  NO,  NO,  NO,  
        TRNS,NO,  NO,  NO,  NO,  NO,  TRNS,
        TRNS,NO,  NO,  NO,  NO,  NO,  
        TRNS,NO,  NO,  NO,  NO,  NO,  TRNS,
        TRNS,TRNS,TRNS,LALT,LGUI,
                                      TRNS,TRNS,
                                           TRNS,
                                 LCTL,LSFT,TRNS,
        // right hand
             NO,  NO,  NO,  NO,  NO,  NO,  TRNS,
             TRNS,NO,  NO,  NO,  NO,  NO,  TRNS,
                  NO,  NO,  NO,  NO,  NO,  TRNS,
             TRNS,NO,  NO,  NO,  NO,  NO,  TRNS,
                       RGUI,RALT,TRNS,TRNS,TRNS,
        TRNS,TRNS,
        TRNS,
        TRNS,RSFT,RCTL
    ),
    KEYMAP(  // layout: layer N: fully transparent
        // left hand
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,
                                      TRNS,TRNS,
                                           TRNS,
                                 TRNS,TRNS,TRNS,
        // right hand
             TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
             TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
                  TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
             TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
                       TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,
        TRNS,
        TRNS,TRNS,TRNS
    ),
*/

};

/* id for user defined functions */
enum function_id {
    TEENSY_KEY,
    SHIFTED_ARROW,
};

enum macro_id {
    LSHIFT_LEFT,
};

/*
 * Fn action definition
 */
static const uint16_t PROGMEM fn_actions[] = {
    [0] = ACTION_DEFAULT_LAYER_SET(0),                    // FN0 - switch to Layer0
    [1] = ACTION_LAYER_MOMENTARY(1),                      // FN1 - push Layer1
    [2] = ACTION_DEFAULT_LAYER_SET(2),                    // FN2 - switch to Layer2
    [3] = ACTION_LAYER_MOMENTARY(3),                      // FN3 - push Layer3
    [4] = ACTION_LAYER_TAP_KEY(1, KC_SPACE),              // FN4 - hold=layer1, tap=spc
    [5] = ACTION_MODS_KEY(MOD_LGUI, KC_TAB),              // FN5 - mod-tab
    [6] = ACTION_MODS_TAP_KEY(MOD_LCTL, KC_ESCAPE),       // FN6 - hold=ctrl, tap=esc
    [7] = ACTION_FUNCTION(TEENSY_KEY),                    // FN7 - Teensy key
    [8] = ACTION_MODS_TAP_KEY(MOD_LCTL, KC_BSPACE),       // FN8 - hold=ctrl, tap=bkspc
    [9] = ACTION_MODS_TAP_KEY(MOD_LSFT, KC_ENTER),        // FN9 - hold=shift, tap=enter

    [10] = ACTION_FUNCTION(SHIFTED_ARROW),                // Shift + Arrows = special

    [19] = ACTION_MODS_KEY(MOD_LSFT, KC_GRV),             // ~

    [20] = ACTION_MODS_KEY(MOD_LSFT, KC_9),               // (
    [21] = ACTION_MODS_KEY(MOD_LSFT, KC_0),               // )
    [22] = ACTION_MODS_KEY(MOD_LSFT, KC_LBRC),            // {
    [23] = ACTION_MODS_KEY(MOD_LSFT, KC_RBRC),            // }

    [24] = ACTION_MODS_KEY(MOD_LSFT, KC_QUOT),            // "
    [25] = ACTION_MODS_KEY(MOD_LSFT, KC_COMM),            // <
    [26] = ACTION_MODS_KEY(MOD_LSFT, KC_DOT),             // >
    [27] = ACTION_MODS_KEY(MOD_LSFT, KC_EQL),             // +
    [28] = ACTION_MODS_KEY(MOD_LSFT, KC_SCLN),            // :
    [29] = ACTION_MODS_KEY(MOD_LSFT, KC_BSLS),            // pipe
    [30] = ACTION_MODS_KEY(MOD_LSFT, KC_MINS),            // _
    [31] = ACTION_MODS_KEY(MOD_LSFT, KC_SLSH),            // ?
};

void action_function(keyrecord_t *record, uint8_t id, uint8_t opt)
{
    keyevent_t event = record->event;

    uint8_t col = event.key.col;
    uint8_t row = event.key.row;
    uint8_t savedmods = get_mods();
    uint8_t shift_pressed = (savedmods & (MOD_LSFT | MOD_RSFT));

    action_t action = { .code = ACTION_NO };
    uint8_t keycode = KC_NO;

    switch (id) {
        case SHIFTED_ARROW:
            switch (row) {
                case 9:
                    keycode = shift_pressed ? KC_HOME : KC_LEFT;
                    break;
                case 10:
                    keycode = shift_pressed ? KC_PGDN : KC_DOWN;
                    break;
                case 11:
                    keycode = shift_pressed ? KC_PGUP : KC_UP;
                    break;
                case 12:
                    keycode = shift_pressed ? KC_END : KC_RIGHT;
                    break;
            }
            action.code = ACTION_KEY(keycode);
            action.key.mods = 0;
            del_mods(MOD_LSFT | MOD_RSFT);
            switch (action.kind.id) {
                case ACT_LMODS:
                case ACT_RMODS:
                    {
                        uint8_t mods = (action.kind.id == ACT_LMODS) ? action.key.mods :
                                                                       action.key.mods<<4;

                        if (event.pressed) {
                            if (mods) {
                                add_weak_mods(mods);
                                send_keyboard_report();
                            }
                            register_code(action.key.code);
                        } else {
                            unregister_code(action.key.code);
                            if (mods) {
                                del_weak_mods(mods);
                                send_keyboard_report();
                            }
                        }
                    }
                    break;
            }
            set_mods(savedmods);
            break;

        case TEENSY_KEY:
            clear_keyboard();
            print("\n\nJump to bootloader... ");
            _delay_ms(250);
            bootloader_jump(); // should not return
            print("not supported.\n");
            break;
    }
}

/*
 * Macro definition
 */
const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt)
{
    keyevent_t event = record->event;
    tap_t tap = record->tap;

    switch (id) {
        case LSHIFT_LEFT:
            if (tap.count > 0 && !tap.interrupted) {
                return (event.pressed ?
                        MACRO( D(HOME), U(HOME), END ) : MACRO_NONE);
            } else {
                return (event.pressed ?
                        MACRO( D(LSHIFT), END ) : MACRO( U(LSHIFT), END ) );
            }
    }
    return MACRO_NONE;
}
