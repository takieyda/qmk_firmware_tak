// Copyright QMK Community
// SPDX-License-Identifier: GPL-2.0+

#pragma once


#ifdef AUDIO_ENABLE
    #define STARTUP_SONG SONG(PLANCK_SOUND)
    // #define STARTUP_SONG SONG(NO_SOUND)

    #define DEFAULT_LAYER_SONGS { SONG(QWERTY_SOUND), \
                                  SONG(COLEMAK_SOUND), \
                                  SONG(DVORAK_SOUND) \
                                }
#endif

#define MUSIC_MASK (keycode != KC_NO)

/*
 * MIDI options
 */

/* enable basic MIDI features:
   - MIDI notes can be sent when in Music mode is on
*/

#define MIDI_BASIC

/* enable advanced MIDI features:
   - MIDI notes can be added to the keymap
   - Octave shift and transpose
   - Virtual sustain, portamento, and modulation wheel
   - etc.
*/
//#define MIDI_ADVANCED

/* override number of MIDI tone keycodes (each octave adds 12 keycodes and allocates 12 bytes) */
//#define MIDI_TONE_KEYCODE_OCTAVES 2

/* ws2812 RGB LED */
#define WS2812_DI_PIN F7
#ifdef WS2812_DI_PIN
   #define RGBLIGHT_LED_COUNT 24
   #define RGBLIGHT_DEFAULT_HUE 127
   #define RGBLIGHT_DEFAULT_SAT 255
   #define RGBLIGHT_DEFAULT_VAL RGBLIGHT_LIMIT_VAL
   #define RGBLIGHT_DEFAULT_SPD 0

   #define RGBLIGHT_EFFECT_BREATHING
   #define RGBLIGHT_EFFECT_RAINBOW_MOOD
   #define RGBLIGHT_EFFECT_RAINBOW_SWIRL
   #define RGBLIGHT_EFFECT_RGB_TEST
   #define RGBLIGHT_EFFECT_STATIC_GRADIENT
   #define RGBLIGHT_EFFECT_TWINKLE
   #define RGBLIGHT_DEFAULT_MODE RGBLIGHT_EFFECT_RAINBOW_SWIRL + 4

   #define RGBLIGHT_HUE_STEP 8
   #define RGBLIGHT_SAT_STEP 8
   #define RGBLIGHT_VAL_STEP 8
#endif