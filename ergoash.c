#include "ergoash.h"

#include "keycodes.h"
#include "keycode.h"
#include "process_key_override.h"

#define _ENGRAM 1

const key_override_t T_override = ko_make_with_layers(MOD_MASK_SHIFT, KC_QUOT, KC_LPRN, (1 << _ENGRAM)); // ' -> (
const key_override_t Y_override = ko_make_with_layers(MOD_MASK_SHIFT, KC_DQUO, KC_RPRN, (1 << _ENGRAM)); // " -> )

const key_override_t G_override = ko_make_with_layers(MOD_MASK_SHIFT, KC_COMM, KC_SCLN, (1 << _ENGRAM)); // , -> ;
const key_override_t H_override = ko_make_with_layers(MOD_MASK_SHIFT, KC_DOT, KC_COLN, (1 << _ENGRAM));  // . -> :

const key_override_t B_override = ko_make_with_layers(MOD_MASK_SHIFT, KC_MINS, KC_UNDS, (1 << _ENGRAM)); // - -> _
const key_override_t N_override = ko_make_with_layers(MOD_MASK_SHIFT, KC_QUES, KC_EXLM, (1 << _ENGRAM)); // ? -> !

// This globally defines all key overrides to be used
const key_override_t **key_overrides = (const key_override_t *[]){
    &T_override, &Y_override, &G_override, &H_override, &B_override, &N_override,
    NULL // Null terminate the array of overrides!
};
