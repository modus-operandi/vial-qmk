/* Copyright 2019-2020 DMQ Design
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

#pragma once

#define VIAL_KEYBOARD_UID {0x42, 0xEC, 0x3B, 0x35, 0x0F, 0x90, 0xA7, 0x8A}

//#define VIAL_UNLOCK_COMBO_ROWS { 0, 0 }
//#define VIAL_UNLOCK_COMBO_COLS { 0, 1 }

#define RGBLIGHT_ANIMATIONS
#define RGBLIGHT_HUE_STEP 8

//#define NO_ACTION_MACRO
//#define NO_ACTION_FUNCTION
#define NO_ACTION_TAPPING

// Use one or the other, determines the orientation of
// the OLED display
// #define RIGHT_HAND
#define LEFT_HAND

#ifdef RGBLIGHT_ENABLE
#undef RGBLIGHT_ANIMATIONS
#define RGBLIGHT_EFFECT_RAINBOW_SWIRL
#endif
