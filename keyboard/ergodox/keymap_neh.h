static const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    KEYMAP(  // layout: layer 0: default
        // left hand
          NO,    1,    2,    3,    4,    5,   NO,
         TAB, QUOT, COMM,  DOT,    P,    Y,  TAB,
        VOLU,    A,    O,    E,    U,    I,
        VOLD, SCLN,    Q,    J,    K,    X,  ENT,
        MUTE,   NO,  FN2,  FN3, LGUI,
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
        WAKE, FN12, FN12, FN12, FN12, FN12,   NO,
        TRNS, FN12, FN12, FN12,  EQL, FN22, TRNS,
          NO, FN27, BSLS, SLSH, MINS, FN20,
          NO, FN12,  GRV, FN29, FN30, LBRC, TRNS,
          NO,   NO,   NO, TRNS, TRNS,
                                      TRNS,   NO,
                                              NO,
                                TRNS, TRNS, TRNS,
        // right hand
              NO, FN12, FN12, FN12, FN12, FN12, SLEP,
            TRNS, FN23,   NO,   NO,   NO,   NO, FN11,
                  FN21, FN10, FN10, FN10, FN10, FN12,
            TRNS, RBRC, FN31, FN19,   NO,   NO,   NO,
                        TRNS, TRNS,   NO,   NO,   NO,
              NO, TRNS,
              NO,
            TRNS, TRNS, TRNS
    ),

    KEYMAP(  // layout: layer 2: mouse
        // left hand
        TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS,
        TRNS, WH_L, WH_U, WH_D, WH_R, TRNS, TRNS,
        TRNS, MS_L, MS_U, MS_D, MS_R, TRNS,
        TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS,
        TRNS, TRNS, TRNS, TRNS, TRNS,
                                      TRNS, TRNS,
                                            TRNS,
                                TRNS, TRNS, TRNS,
        // right hand
            TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS,
            TRNS,   NO, BTN1, BTN2, BTN3, TRNS, TRNS,
                    NO, MS_L, MS_D, MS_U, MS_R, TRNS,
            TRNS,   NO, TRNS, TRNS, TRNS, TRNS, TRNS,
                        TRNS, TRNS, TRNS, TRNS, TRNS,
            TRNS, TRNS,
            TRNS,
            TRNS, TRNS, TRNS
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
              F7,   F8,   F9,  F10,  F11,  F12, TRNS,
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
        TRNS,   F1,   F2,   F3,   F4,   F5,   F6,
         FN7,   NO, PGUP,   UP, PGDN, PGUP, TRNS,
        TRNS,   NO, LEFT, DOWN, RGHT, PGDN,
        TRNS,   NO,   NO,  END, HOME,   NO, TRNS,
         FN5, TRNS, TRNS, LALT, LGUI,
                                      TRNS, TRNS,
                                            TRNS,
                                LCTL, LSFT, TRNS,
        // right hand
              F7,   F8,   F9,  F10,  F11,  F12, MINS,
            TRNS, PGUP, PGUP,   UP, PGDN,   NO,  FN7,
                  PGDN, LEFT, DOWN, RGHT,   NO, TRNS,
            TRNS,   NO, HOME,  END,   NO,   NO, TRNS,
                        RGUI, RALT, TRNS, TRNS, TRNS,
            TRNS, TRNS,
            TRNS,
            TRNS, RSFT, RCTL
    ),

    KEYMAP(  // layout: layer 5: Workman layout
        // left hand
        TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS,
        TRNS,    Q,    D,    R,    W,    B, TRNS,
        TRNS,    A,    S,    H,    T,    G,
        TRNS,    Z,    X,    M,    C,    V, TRNS,
        TRNS, TRNS, TRNS, TRNS, TRNS,
                                      TRNS, TRNS,
                                            TRNS,
                                TRNS, TRNS, TRNS,
        // right hand
            TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS,
            TRNS,    J,    F,    U,    P,    4, TRNS,
                     Y,    N,    E,    O,    I, TRNS,
            TRNS,    K,    L, TRNS, TRNS, TRNS, TRNS,
                        TRNS, TRNS, TRNS, TRNS, TRNS,
            TRNS, TRNS,
            TRNS,
            TRNS, TRNS, TRNS
    ),

/*
    KEYMAP(  // layout: layer N: transparent on edges, all others are empty
        // left hand
        TRNS,   NO,   NO,   NO,   NO,   NO,   NO,
        TRNS,   NO,   NO,   NO,   NO,   NO, TRNS,
        TRNS,   NO,   NO,   NO,   NO,   NO,
        TRNS,   NO,   NO,   NO,   NO,   NO, TRNS,
        TRNS, TRNS, TRNS, LALT, LGUI,
                                      TRNS, TRNS,
                                            TRNS,
                                LCTL, LSFT, TRNS,
        // right hand
              NO,   NO,   NO,   NO,   NO,   NO, TRNS,
            TRNS,   NO,   NO,   NO,   NO,   NO, TRNS,
                    NO,   NO,   NO,   NO,   NO, TRNS,
            TRNS,   NO,   NO,   NO,   NO,   NO, TRNS,
                        RGUI, RALT, TRNS, TRNS, TRNS,
            TRNS, TRNS,
            TRNS,
            TRNS, RSFT, RCTL
    ),
    KEYMAP(  // layout: layer N: fully transparent
        // left hand
        TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS,
        TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS,
        TRNS, TRNS, TRNS, TRNS, TRNS, TRNS,
        TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS,
        TRNS, TRNS, TRNS, TRNS, TRNS,
                                      TRNS, TRNS,
                                            TRNS,
                                TRNS, TRNS, TRNS,
        // right hand
            TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS,
            TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS,
                  TRNS, TRNS, TRNS, TRNS, TRNS, TRNS,
            TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS,
                        TRNS, TRNS, TRNS, TRNS, TRNS,
            TRNS, TRNS,
            TRNS,
            TRNS, TRNS, TRNS
    ),
*/

};

/* id for user defined functions */
enum function_id {
    TEENSY_KEY,
    SHIFTED_ARROW,
    SHIFTED_KEY,
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
    [2] = ACTION_LAYER_MOMENTARY(2),                      // FN2 - switch to Layer2
    [3] = ACTION_LAYER_MOMENTARY(3),                      // FN3 - push Layer3
    [4] = ACTION_LAYER_TAP_KEY(1, KC_SPACE),              // FN4 - hold=layer1, tap=spc
    [5] = ACTION_MODS_KEY(MOD_LGUI, KC_TAB),              // FN5 - mod-tab
    [6] = ACTION_MODS_TAP_KEY(MOD_LCTL, KC_ESCAPE),       // FN6 - hold=ctrl, tap=esc
    [7] = ACTION_FUNCTION(TEENSY_KEY),                    // FN7 - Teensy key
    [8] = ACTION_MODS_TAP_KEY(MOD_LCTL, KC_BSPACE),       // FN8 - hold=ctrl, tap=bkspc
    [9] = ACTION_MODS_TAP_KEY(MOD_LSFT, KC_ENTER),        // FN9 - hold=shift, tap=enter

    [10] = ACTION_FUNCTION(SHIFTED_ARROW),                // Shift + Arrows = special
    [11] = ACTION_MODS_KEY(MOD_LGUI, KC_F12),             // Mod-F12
    [12] = ACTION_FUNCTION(SHIFTED_KEY),                  // Shift + Arrows = special

    [19] = ACTION_MODS_KEY(MOD_LSFT, KC_GRV),             // ~

    [20] = ACTION_MODS_KEY(MOD_LSFT, KC_9),               // (
    [21] = ACTION_MODS_KEY(MOD_LSFT, KC_0),               // )
    [22] = ACTION_MODS_KEY(MOD_LSFT, KC_LBRC),            // {
    [23] = ACTION_MODS_KEY(MOD_LSFT, KC_RBRC),            // }

    [27] = ACTION_MODS_KEY(MOD_LSFT, KC_EQL),             // +
    [29] = ACTION_MODS_KEY(MOD_LSFT, KC_BSLS),            // pipe
    [30] = ACTION_MODS_KEY(MOD_LSFT, KC_MINS),            // _
    [31] = ACTION_MODS_KEY(MOD_LSFT, KC_SLSH),            // ?
};

void neh_hotkey(keyrecord_t *record, action_t action)
{
    keyevent_t event = record->event;

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
        default:
            print("Not supported.\n");
            break;
    }
}

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
            neh_hotkey(record, action);
            set_mods(savedmods);
            break;

        case SHIFTED_KEY:
            if (col == 0) {
                switch (row) {
                    case 1:
                        keycode = KC_1;
                        break;
                    case 2:
                        keycode = KC_2;
                        break;
                    case 3:
                        keycode = KC_3;
                        break;
                    case 4:
                        keycode = KC_4;
                        break;
                    case 5:
                        keycode = KC_5;
                        break;
                    case 8:
                        keycode = KC_6;
                        break;
                    case 9:
                        keycode = KC_7;
                        break;
                    case 10:
                        keycode = KC_8;
                        break;
                    case 11:
                        keycode = KC_9;
                        break;
                    case 12:
                        keycode = KC_0;
                        break;
                    default:
                        break;
                }
            }

            if (col == 1) {
                switch (row) {
                    case 1:
                        keycode = KC_QUOT;
                        break;
                    case 2:
                        keycode = KC_COMM;
                        break;
                    case 3:
                        keycode = KC_DOT;
                        break;
                    default:
                        break;
                }
            }

            if (col == 2) {
                switch (row) {
                    case 13:
                        keycode = KC_MINS;
                        break;
                    default:
                        break;
                }
            }

            if (col == 3) {
                switch (row) {
                    case 1:
                        keycode = KC_SCLN;
                        break;
                    default:
                        break;
                }
            }

            if (keycode != KC_NO) {
                action.code = ACTION_MODS_KEY(MOD_LSFT, keycode);
            }
            if (action.code != ACTION_NO) {
                if (shift_pressed) {
                    action.key.mods = 0;
                    del_mods(MOD_LSFT | MOD_RSFT);
                }
                neh_hotkey(record, action);
                if (shift_pressed) {
                    set_mods(savedmods);
                }
            }

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
