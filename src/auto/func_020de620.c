#include "m2c.h"
#include "engine.h"

extern M2C_UNK data_021570b0;

void func_020de620(void) {
    M2C_FIELD(M2C_FIELD(&data_021570b0, void **, 4), s16 *, 0x4B0) = 1;
    M2C_FIELD(&data_021570b0, u8 *, 0xE) = (u8) M2C_FIELD(M2C_FIELD(&data_021570b0, void **, 4), u8 *, 0x4B4);
    M2C_FIELD(&data_021570b0, s8 *, 0xC) = 5;
}
