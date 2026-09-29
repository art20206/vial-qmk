#pragma once

// Hardcode original Board UID (Little Endian for 4589D8FAC72A3689)
#undef VIAL_KEYBOARD_UID
#define VIAL_KEYBOARD_UID {0x89, 0x36, 0x2A, 0xC7, 0xFA, 0xD8, 0x89, 0x45}

// Vial Unlock Combo
#define VIAL_UNLOCK_COMBO_ROWS {0, 0}
#define VIAL_UNLOCK_COMBO_COLS {0, 1}

// Restore 6 layers
#undef DYNAMIC_KEYMAP_LAYER_COUNT
#define DYNAMIC_KEYMAP_LAYER_COUNT 6

// Restore original memory allocations
#define VIAL_TAP_DANCE_ENTRIES 32
#define VIAL_COMBO_ENTRIES 32
#define VIAL_KEY_OVERRIDE_ENTRIES 32
#define VIAL_MACRO_ENTRIES 16

// Tapping term setting
#define TAPPING_TERM 180
