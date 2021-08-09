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

rgb_config_t rgb_matrix_config;

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

// rgb_matrix_set_color_all(250, 100, 0);

const uint8_t PROGMEM layercolors[][2] = {
  [0] = {200,155}
};

const uint8_t PROGMEM ledcolors[][DRIVER_LED_TOTAL][3] = {
  [1] = {
    {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {142,123,255}, {142,123,255}, {142,123,255}, {142,123,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}
  }
};


void set_layer_color( uint8_t layer ) {
  for (int i = 0; i < DRIVER_LED_TOTAL; i++) {
    rgb_matrix_set_color( i, 250, 100, 0 );
  }
  // Escape (Red)
  rgb_matrix_set_color( 0, 250, 0, 0);
  // F-keys
  for(int i = 1; i <= 11; i++) {
    rgb_matrix_set_color( i, 0, 0, 250);
  }

  if ( layer == 1 ) {
    rgb_matrix_set_color(2, 0, 250, 0);
    rgb_matrix_set_color(3, 0, 250, 0);
    rgb_matrix_set_color(4, 250, 0, 0);
    rgb_matrix_set_color(7, 0, 250, 0);
  }
  // F12
  rgb_matrix_set_color( 12, 0, 250, 0);
  // PRTSC
  rgb_matrix_set_color( 13, 250, 100, 0);
  // DEL
  rgb_matrix_set_color( 14, 250, 0, 0);

  // letters row 1 (top)
  for(int i = 15; i <= 27; i++) {
    rgb_matrix_set_color( i, 250, 250, 250);
  }
  // BK_SP
  rgb_matrix_set_color( 28, 250, 0, 0);
  // Tab
  rgb_matrix_set_color( 29, 250, 250, 0);

  // letters row 2
  for(int i = 30; i <= 42; i++) {
    rgb_matrix_set_color( i, 250, 250, 250);
  }

  // home
  if ( layer == 1) {
    rgb_matrix_set_color( 43, 250, 100, 0);
  } else {
    rgb_matrix_set_color( 43, 250, 0, 0);
  }

  // caps
  rgb_matrix_set_color( 44, 250, 250, 0);

  // letters row 3
  for(int i = 45; i <= 56; i++) {
    rgb_matrix_set_color( i, 250, 250, 250);
  }

  // center bksp
  rgb_matrix_set_color( 50, 250, 0, 0);

  // return/enter
  rgb_matrix_set_color( 57, 0, 250, 0);

  // end
  if ( layer == 1) {
    rgb_matrix_set_color( 58, 250, 100, 0);
  } else {
    rgb_matrix_set_color( 58, 250, 0, 0);
  }

  // l_shft
  rgb_matrix_set_color( 59, 250, 250, 0);

  // letters row 4
  for(int i = 60; i <= 70; i++) {
    rgb_matrix_set_color( i, 250, 250, 250);
  }

  // return
  rgb_matrix_set_color( 65, 0, 250, 0);

  // r_shft
  rgb_matrix_set_color( 71, 250, 250, 0);

  // arrow key up
  rgb_matrix_set_color( 72, 250, 0, 0);

  // l_ctrl
  rgb_matrix_set_color( 73, 250, 0, 0);

  // l_meta
  rgb_matrix_set_color( 74, 250, 250, 0);

  // l_alt
  rgb_matrix_set_color( 75, 0, 0, 250);

  // l_space
  rgb_matrix_set_color( 76, 0, 250, 0);

  // m_ctrl
  rgb_matrix_set_color( 77, 0, 0, 250);

  // m_shft
  rgb_matrix_set_color( 78, 0, 0, 250);

  // r_space
  rgb_matrix_set_color( 79, 0, 250, 0);

  // r_alt
  rgb_matrix_set_color( 80, 0, 0, 250);

  // fn
  rgb_matrix_set_color( 81, 250, 0, 0);

  // r_ctrl
  rgb_matrix_set_color( 82, 250, 0, 0);

  // left-arrow
  rgb_matrix_set_color( 83,  250, 0, 0);
  // down arrow
  rgb_matrix_set_color( 84,  250, 0, 0);
  // right arrow
  rgb_matrix_set_color( 85,  250, 0, 0);

}


void rgb_matrix_indicators_user(void) {
  // set layer color to static
  uint8_t layer = biton32(layer_state);
  set_layer_color(layer);
}












