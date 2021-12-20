/*
This is the c configuration file for the keymap

Copyright 2012 Jun Wako <wakojun@gmail.com>
Copyright 2015 Jack Humbert

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/



#pragma once

//#define USE_MATRIX_I2C

/* Select hand configuration */

#define MASTER_LEFT
// #define MASTER_RIGHT
// #define EE_HANDS

#define USE_SERIAL_PD2

#define TAPPING_FORCE_HOLD
#define TAPPING_TERM 100

#ifdef RGBLIGHT_ENABLE
    #undef RGBLED_NUM
    #define RGBLIGHT_ANIMATIONS
    #define RGBLED_NUM 27
    #define RGBLIGHT_LIMIT_VAL 120
    #define RGBLIGHT_HUE_STEP 10
    #define RGBLIGHT_SAT_STEP 17
    #define RGBLIGHT_VAL_STEP 17
#endif

#define OLED_FONT_H "keyboards/crkbd/lib/glcdfont.c"

#define ENABLE_RGB_MATRIX_BREATHING           // Single hue brightness cycling animation
#define ENABLE_RGB_MATRIX_BAND_SAT        // Single hue band fading saturation scrolling left to right
#define ENABLE_RGB_MATRIX_BAND_VAL        // Single hue band fading brightness scrolling left to right
//#define ENABLE_RGB_MATRIX_BAND_PINWHEEL_SAT   // Single hue 3 blade spinning pinwheel fades saturation
//#define ENABLE_RGB_MATRIX_BAND_PINWHEEL_VAL   // Single hue 3 blade spinning pinwheel fades brightness
//#define ENABLE_RGB_MATRIX_BAND_SPIRAL_SAT     // Single hue spinning spiral fades saturation
#define ENABLE_RGB_MATRIX_BAND_SPIRAL_VAL     // Single hue spinning spiral fades brightness
#define ENABLE_RGB_MATRIX_CYCLE_ALL           // Full keyboard solid hue cycling through full gradient
#define ENABLE_RGB_MATRIX_CYCLE_LEFT_RIGHT    // Full gradient scrolling left to right
//#define ENABLE_RGB_MATRIX_CYCLE_UP_DOWN       // Full gradient scrolling top to bottom
//#define ENABLE_RGB_MATRIX_CYCLE_OUT_IN        // Full gradient scrolling out to in
#define ENABLE_RGB_MATRIX_CYCLE_OUT_IN_DUAL   // Full dual gradients scrolling out to in
//#define ENABLE_RGB_MATRIX_RAINBOW_MOVING_CHEVRON  // Full gradent Chevron shapped scrolling left to right
#define ENABLE_RGB_MATRIX_CYCLE_PINWHEEL      // Full gradient spinning pinwheel around center of keyboard
//#define ENABLE_RGB_MATRIX_CYCLE_SPIRAL        // Full gradient spinning spiral around center of keyboard
#define ENABLE_RGB_MATRIX_DUAL_BEACON         // Full gradient spinning around center of keyboard
//#define ENABLE_RGB_MATRIX_RAINBOW_BEACON      // Full tighter gradient spinning around center of keyboard
//#define ENABLE_RGB_MATRIX_RAINBOW_PINWHEELS   // Full dual gradients spinning two halfs of keyboard
//#define ENABLE_RGB_MATRIX_RAINDROPS           // Randomly changes a single key's hue
//#define ENABLE_RGB_MATRIX_JELLYBEAN_RAINDROPS // Randomly changes a single key's hue and saturation
#define ENABLE_RGB_MATRIX_HUE_BREATHING       // Hue shifts up a slight ammount at the same time, then shifts back
//#define ENABLE_RGB_MATRIX_HUE_PENDULUM        // Hue shifts up a slight ammount in a wave to the right, then back to the left
//#define ENABLE_RGB_MATRIX_HUE_WAVE            // Hue shifts up a slight ammount and then back down in a wave to the right 