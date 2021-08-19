/* Copyright 2021 Shulin Huang <mumu@x-bows.com>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  /* Keymap CUSTOM: (Base Layer) Default Layer
   *
   * |---------------------------------------------------------------------------------------------------------------------------------|
   * | Esc |  F1  |  F2  |  F3  |  F4  |      F5  |  F6  |  F7  |  F8  |      F9  |  F10 |  F11 |  F12 |   Prtsc   |    DELETE    |
   * |---------------------------------------------------------------------------------------------------------------------------------|
   * |  ~  |     1   |   2   |   3   |   4   |    5      |       6    |    7    |    8   |   9  |   0  |   -  |  =  |  Backspace  |
   * |---------------------------------------------------------------------------------------------------------------------------------|
   * | Tab |   Q    |    W   |   E  |   R  |   T  |            |    Y   |    U   |    I  |   O  |   P  |   [  |  ]  |   \  | HOME |
   * |---------------------------------------------------------------------------------------------------------------------------------|
   * | Ctl |   A   |   S   |   D  |   F  |   G  |      Bksp      |    H  |    J   |   K  |   L  |   ;  |  '"  |    Enter   | END |
   * |---------------------------------------------------------------------------------------------------------------------------------|
   * |Shift|   Z  |   X  |   C  |   V  |   B  |       Enter       |    N  |    M   |  ,  |   .  |  /?  | Shift|      |  Up |
   * |---------------------------------------------------------------------------------------------------------------------------------|
   * |Ctrl | GUI |     Alter   |    Space   |   MO(1)   |   Shift   |     Space     |    Alter   |  FN  | Ctrl | Lft  |  Dn |  Rig |
   * |---------------------------------------------------------------------------------------------------------------------------------|
   */
  [0] = LAYOUT(
    KC_ESC,  KC_F1,   KC_F2, KC_F3,  KC_F4,  KC_F5,   KC_F6,   KC_F7, KC_F8,  KC_F9,   KC_F10, KC_F11,  KC_F12,  KC_PSCR, KC_DEL,
    KC_GRV,  KC_1,    KC_2,  KC_3,   KC_4,   KC_5,             KC_6,   KC_7,  KC_8,    KC_9,   KC_0,    KC_MINS, KC_EQL,  KC_BSPC,
    KC_TAB,  KC_Q,    KC_W,  KC_E,   KC_R,   KC_T,    KC_Y,    KC_U,  KC_I,   KC_O,    KC_P,   KC_LBRC, KC_RBRC, KC_BSLS, KC_HOME,
    KC_CAPS, KC_A,    KC_S,  KC_D,   KC_F,   KC_G,    KC_BSPC, KC_H,  KC_J,   KC_K,    KC_L,   KC_SCLN, KC_QUOT, KC_ENT,  KC_END,
    KC_LSFT, KC_Z,    KC_X,  KC_C,   KC_V,   KC_B,    KC_ENT,  KC_N,  KC_M,   KC_COMM, KC_DOT, KC_SLSH, KC_RSFT, KC_UP,
    KC_LCTL, KC_LGUI, KC_LALT,       KC_SPC, MO(1), KC_LSFT, KC_SPC,        KC_RALT, MO(1),  KC_RCTL, KC_LEFT, KC_DOWN, KC_RGHT),
  [1] = LAYOUT(
    RESET,     KC_TRNS,  KC_VOLD,  KC_VOLU,  KC_MUTE,  KC_TRNS,   KC_TRNS,  KC_MPLY,  KC_TRNS,  KC_CALC,   KC_MYCM,  KC_MSEL,   KC_MAIL,   NK_TOGG,   EEP_RST,
    KC_TRNS,   KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,             KC_TRNS,  KC_TRNS,  KC_TRNS,   KC_TRNS,  KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_NLCK,
    RGB_TOG,   RGB_MOD,  RGB_VAI,  RGB_HUI,  KC_TRNS,  KC_TRNS,   KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,   KC_TRNS,  KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_PGUP,
    KC_TRNS,   RGB_SPD,  RGB_VAD,  RGB_SPI,  KC_TRNS,  KC_TRNS,   KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,   KC_TRNS,  KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_PGDN,
    KC_TRNS,   KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,   KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,   KC_TRNS,  KC_TRNS,   KC_MUTE,   KC_VOLU,
    KC_TRNS,   KC_TRNS,  KC_TRNS,            KC_TRNS,  KC_TRNS,   KC_TRNS,  KC_TRNS,            KC_TRNS,   KC_TRNS,  KC_MPLY,   KC_MPRV,   KC_VOLD,   KC_MNXT)
};


void set_key_red( uint8_t key) {
  rgb_matrix_set_color( key, 250, 0, 0);
}

void set_key_green( uint8_t key) {
  rgb_matrix_set_color( key, 0, 250, 0);
}

void set_key_blue( uint8_t key) {
  rgb_matrix_set_color( key, 0, 0, 250);
}

void set_key_yellow( uint8_t key) {
  rgb_matrix_set_color( key, 250, 250, 0);
}

void set_key_orange( uint8_t key) {
  rgb_matrix_set_color( key, 250, 100, 0);
}

void set_key_white( uint8_t key) {
  rgb_matrix_set_color( key, 250, 250, 250);
}



void set_rgb_colors_by_layer( uint8_t layer ) {

  // Escape
  set_key_red(0);

  // F-keys
  for(int i = 1; i <= 11; i++) {
    set_key_blue(i);
  }

  // second layer F-keys: media buttons (vol-, vol+, mute, play/pause)
  if ( layer == 1 ) {
    set_key_green(2);
    set_key_green(3);
    set_key_red(4);
    set_key_green(7);
  }
  // F12
  set_key_green(12);
  // PRTSC
  set_key_orange(13);
  // DEL
  set_key_red(14);

  // letters row 1 (top)
  for(int i = 15; i <= 27; i++) {
    set_key_white(i);
  }
  // BK_SP
  set_key_red(28);
  // Tab
  set_key_yellow(29);

  // letters row 2
  for(int i = 30; i <= 42; i++) {
    set_key_white(i);
  }

  // home
  if ( layer == 1) {
    set_key_orange(43);
  } else {
    set_key_red(43);
  }

  // caps
  if (host_keyboard_led_state().caps_lock) {
    set_key_white(44);
  } else {
    set_key_yellow(44);
  }

  // letters row 3
  for(int i = 45; i <= 56; i++) {
    set_key_white(i);
  }

  // center bksp
  set_key_red(50);

  // return/enter
  set_key_green(57);

  // end
  if ( layer == 1) {
    set_key_orange(58);
  } else {
    set_key_red(58);
  }

  // l_shft
  set_key_yellow(59);

  // letters row 4
  for(int i = 60; i <= 70; i++) {
    set_key_white(i);
  }

  // return
  set_key_green(65);

  // r_shft
  set_key_yellow(71);

  // arrow key up
  set_key_red(72);

  // l_ctrl
  set_key_red(73);

  // l_meta
  set_key_yellow(74);

  // l_alt
  set_key_blue(75);

  // l_space
  set_key_green(76);

  // m_ctrl
  set_key_blue(77);

  // m_shft
  set_key_blue(78);

  // r_space
  set_key_green(79);

  // r_alt
  set_key_blue(80);

  // fn
  set_key_red(81);

  // r_ctrl
  set_key_red(82);

  // left-arrow
  set_key_red(83);
  // down arrow
  set_key_red(84);
  // right arrow
  set_key_red(85);
}

void rgb_matrix_indicators_user(void) {
  // set layer color to static
  uint8_t layer = biton32(layer_state);
  set_rgb_colors_by_layer(layer);
}