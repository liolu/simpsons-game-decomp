#include "engine.h"
#include "m2c.h"

void func_02060c3c(M2C_UNK);
M2C_UNK func_02060ccc(M2C_UNK);

void func_02060bbc(s32 arg0, s32 arg1) {
    func_02060c3c(arg0);
    M2C_FIELD(arg0, s32 *, 0x9C) = (s32) M2C_FIELD(arg1, s32 *, 0);
    M2C_FIELD(arg0, s32 *, 0xA0) = (s32) M2C_FIELD(arg1, s32 *, 4);
    M2C_FIELD(arg0, s32 *, 0xA4) = (s32) M2C_FIELD(arg1, s32 *, 8);
    M2C_FIELD(arg0, s32 *, 0xA8) = (s32) M2C_FIELD(arg1, s32 *, 0xC);
    M2C_FIELD(arg0, s32 *, 0xAC) = (s32) M2C_FIELD(arg1, s32 *, 0x10);
    M2C_FIELD(arg0, u8 *, 0xB0)  = (u8) M2C_FIELD(arg1, u8 *, 0x14);
    M2C_FIELD(arg0, u8 *, 0xB1)  = (u8) M2C_FIELD(arg1, u8 *, 0x15);
    M2C_FIELD(arg0, u8 *, 0xB2)  = (u8) M2C_FIELD(arg1, u8 *, 0x16);
    M2C_FIELD(arg0, s32 *, 0xB4) = (s32) M2C_FIELD(arg1, s32 *, 0x18);
    M2C_FIELD(arg0, s32 *, 0xB8) = (s32) M2C_FIELD(arg1, s32 *, 0x1C);
    M2C_FIELD(arg0, s8 *, 0x98)  = 1;
    if (func_02060ccc(arg0) == 0) {
        M2C_FIELD(arg0, s8 *, 0x98) = 0;
    }
}
