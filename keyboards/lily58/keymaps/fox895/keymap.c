#include QMK_KEYBOARD_H

enum layer_number {
  _QWERTY = 0,
  _SYMBOLS,
  _ARROW,
  _FUNCTIONS,
  _MEDIA,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* QWERTY
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * | ESC  |   1  |   2  |   3  |   4  |   5  |                    |   6  |   7  |   8  |   9  |   0  |  \   |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | Tab  |   Q  |   W  |   E  |   R  |   T  |                    |   Y  |   U  |   I  |   O  |   P  |  -   |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |LShift|   A  |   S  |   D  |   F  |   G  |-------.    ,-------|   H  |   J  |   K  |   L  |   ;  |  '   |
 * |------+------+------+------+------+------|   [   |    |    ]  |------+------+------+------+------+------|
 * |LCTRL |   Z  |   X  |   C  |   V  |   B  |-------|    |-------|   N  |   M  |   ,  |   .  |   /  |RShift|
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *                   | LAlt |SYMBOL| LGUI | /Enter  /       \Space \  |BackSP |ARROW| MEDIA|
 *                   |      |      |      |/       /         \      \ |      |      |      |
 *                   `----------------------------'           '------''--------------------'
 *
 * /

  [_QWERTY] = LAYOUT( \
  KC_ESC, KC_1, KC_2, KC_3, KC_4, KC_5,                    KC_6, KC_7, KC_8, KC_9, KC_0, KC_BSLS,
  KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T,                    KC_Y, KC_U, KC_I, KC_O, KC_P, KC_MINS,
  KC_LSFT, KC_A, KC_S, KC_D, KC_F, KC_G,                   KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT,
  KC_LCTL, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_LBRC, KC_RBRC, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT,
         KC_LALT, MO(_SYMBOLS), KC_LGUI, KC_ENT,  KC_SPC,  KC_BSPC, MO(_ARROW), MO(_MEDIA)
  ),



/* SYMBOLS
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |      |      |      |      |      |      |                    |      |      |      |      |      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |      |   ^  |   %  |   @  |   <  |                    |   >  |   #  |   $  |   !  |      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |   `  |   {  |   [  |   (  |   :  |-------.    ,-------|   =  |   )  |   ]  |   }  |   \  |   '  |
 * |------+------+------+------+------+------|   <   |    |    >  |------+------+------+------+------+------|
 * |      |      |      |      |      |   -  |-------|    |-------|   _  |   *  |   ,  |   .  |   /  |      |
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *                   |      |      |      | /       /       \      \  |  DEL |FUNCTS|      |
 *                   |      |      |      |/       /         \      \ |      |      |      |
 *                   `----------------------------'           '------''--------------------'
 */

[_SYMBOLS] = LAYOUT( \
KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
KC_NO,   KC_NO,   KC_CIRC, KC_PERC, KC_AT,   KC_LT,                     KC_GT,   KC_HASH, KC_DLR,  KC_EXLM, KC_NO,   KC_NO,
KC_TRNS, KC_GRV,  KC_LCBR, KC_LBRC, KC_LPRN, KC_COLN,                   KC_EQL,  KC_RPRN, KC_RBRC, KC_RCBR, KC_BSLS, KC_QUOT,
KC_TRNS, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_MINS, KC_LT,   KC_GT,   KC_UNDS, KC_ASTR, KC_COMM, KC_DOT,  KC_SLSH, KC_TRNS,
                           KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_DEL,  MO(_FUNCTIONS),   KC_TRNS
),



/* ARROW
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |      |      |      |      |      |      |                    |      |      |      |      |      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |   6  |   7  |   8  |   9  |   0  |                    |      |   +  |   *  |   -  |   /  |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |   1  |   2  |   3  |   4  |   5  |-------.    ,-------| Left | Down |  Up  | Right|   :  |   =  |
 * |------+------+------+------+------+------|       |    |   \   |------+------+------+------+------+------|
 * |      |      |      |      |      |      |-------|    |-------|      |      |      |      |      |      |
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *                   |      |FUNCT |      | /       /       \      \  |      |      |      |
 *                   |      |      |      |/       /         \      \ |      |      |      |
 *                   `----------------------------'           '------''--------------------'
 */

[_ARROW] = LAYOUT( \
KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                 KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
KC_NO,   KC_6,    KC_7,    KC_8,    KC_9,    KC_0,                   KC_NO,   KC_PLUS, KC_ASTR, KC_PMNS, KC_PSLS, KC_NO,
KC_TRNS,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                   KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, KC_COLN, KC_PEQL,
KC_TRNS, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,  KC_TRNS, KC_BSLS, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
                           KC_TRNS, MO(_FUNCTIONS), KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
),


/* FUNCTIONS
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |      |      |      |      |      |      |                    |      |      |      |      |      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |      |      |      |      |      |                    |      |      |      |      |      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |LShift|  F1  |  F2  |  F3  |  F4  |  F5  |-------.    ,-------|  F8  |  F9  | F10  | F11  | F12  |      |
 * |------+------+------+------+------+------|   F6  |    |  F7   |------+------+------+------+------+------|
 * |      |      |      |  End | PGDN |      |-------|    |-------|      | PGUP | HOME |PScrn |      |      |
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *                   |      |      |      | /       /       \      \  |      |      |      |
 *                   |      |      |      |/       /         \      \ |      |      |      |
 *                   `----------------------------'           '------''--------------------'
 */

[_FUNCTIONS] = LAYOUT( \
KC_TRNS, KC_NO, KC_NO, KC_NO,  KC_NO,  KC_NO,                 KC_NO,   KC_NO,   KC_NO,   KC_NO,    KC_NO,  KC_NO,
KC_NO,   KC_NO, KC_NO, KC_NO,  KC_NO,  KC_NO,                 KC_NO,   KC_NO,   KC_NO,   KC_NO,    KC_NO,  KC_NO,
KC_LSFT, KC_F1, KC_F2, KC_F3,  KC_F4,  KC_F5,                 KC_F8,   KC_F9,   KC_F10,  KC_F11,   KC_F12, KC_NO,
KC_TRNS, KC_NO, KC_NO, KC_END, KC_PGDN,KC_NO, KC_F6,   KC_F7, KC_NO,   KC_PGUP, KC_HOME, KC_PSCR,  KC_NO,  KC_NO,
                    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
),

/* MEDIA
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |      |      |      |      |      |      |                    |      |      |      |      |      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |      |      |      |      |      |                    |      |      |      |      |      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |C_LOCK|      | Mute | Vol- | Vol+ |      |-------.    ,-------|      |      | Prev | Play | Next | Calc |
 * |------+------+------+------+------+------|       |    |       |------+------+------+------+------+------|
 * |      |      |      |      |      |      |-------|    |-------|      |      |      |      |      |      |
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *                   |      |      |      | /       /       \      \  |      |      |      |
 *                   |      |      |      |/       /         \      \ |      |      |      |
 *                   `----------------------------'           '------''--------------------'
 */
[_MEDIA] = LAYOUT( \
KC_NO,   KC_NO, KC_NO,   KC_NO,   KC_NO,   KC_NO,                KC_NO, KC_NO, KC_NO,   KC_NO,   KC_NO,   KC_NO,
KC_NO,   KC_NO, KC_NO,   KC_NO,   KC_NO,   KC_NO,                KC_NO, KC_NO, KC_NO,   KC_NO,   KC_NO,   KC_NO,
KC_CAPS, KC_NO, KC_MUTE, KC_VOLD, KC_VOLU, KC_NO,                KC_NO, KC_NO, KC_MPRV, KC_MPLY, KC_MNXT, KC_CALC,
KC_NO,   KC_NO, KC_NO,   KC_NO,   KC_NO,   KC_NO, KC_NO,  KC_NO, KC_NO, KC_NO, KC_NO,   KC_NO,   KC_NO,   KC_NO,
                         KC_NO,   KC_NO,   KC_NO, KC_NO,  KC_NO, KC_NO, KC_NO, KC_TRNS
),




};

// layer_state_t layer_state_set_user(layer_state_t state) {
//   return update_tri_layer_state(state, _SYMBOLS, _ARROW, _FUNCTIONS);
// }

//SSD1306 OLED update loop, make sure to enable OLED_ENABLE=yes in rules.mk
#ifdef OLED_ENABLE

/* status variables */
int   current_wpm;
led_t led_usb_state;

bool isSneaking;
bool isJumping;
bool showedJump;
bool isBarking;

/* timers */
uint32_t anim_sleep = 0;


// When you add source files to SRC in rules.mk, you can use functions.
const char *read_logo(void);
void render_luna(int x, int y);

static void print_status_narrow(void) {
    /* Print current layer */
    oled_set_cursor(0, 3);
    oled_write("LAYER", false);

    oled_set_cursor(0, 6);

    switch (get_highest_layer(layer_state)) {
        case _QWERTY:
            oled_write("Base ", false);
            break;
        case _SYMBOLS:
            oled_write("Symb", false);
            break;
        case _ARROW:
            oled_write("Arrow", false);
            break;
        case _FUNCTIONS:
            oled_write("Func", false);
            break;
        case _MEDIA:
            oled_write("Media", true);
            break;
        default:
            oled_write("Undef", false);
    }
    /* KEYBOARD PET RENDER START */

    render_luna(0, 13);

    /* KEYBOARD PET RENDER END */
}

oled_rotation_t oled_init_user(oled_rotation_t rotation) {
  if (!is_keyboard_master())
    return OLED_ROTATION_180;
  if (is_keyboard_master())
    return OLED_ROTATION_270;
  return rotation;  // flips the display 180 degrees if offhand
}

bool oled_task_user(void) {

  current_wpm = get_current_wpm();
  led_usb_state = host_keyboard_led_state();

  if (is_keyboard_master()) {
    print_status_narrow();
  } else {
    oled_write(read_logo(), false);
  }

  /* this fixes the screen on and off bug */
  if (current_wpm > 0) {
    oled_on();
    anim_sleep = timer_read32();
  } else if (timer_elapsed32(anim_sleep) > OLED_TIMEOUT) {
    oled_off();
  }
  return false;
}
#endif // OLED_ENABLE

bool process_record_user(uint16_t keycode, keyrecord_t *record) {

#ifdef OLED_ENABLE
  switch (keycode) {
    case KC_LCTL:
    case KC_RCTL:
      if (record->event.pressed) {
          isSneaking = true;
      } else {
          isSneaking = false;
      }
      break;
    case KC_SPC:
      if (record->event.pressed) {
          isJumping  = true;
          showedJump = false;
      } else {
          isJumping = false;
      }
      break;
    case KC_TAB:
        if (record->event.pressed){
            isBarking = true;
        } else {
            isBarking = false;
        }
        break;
  }
#endif //OLED_ENABLE

  return true;
}
