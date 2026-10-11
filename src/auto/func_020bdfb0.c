#include "m2c.h"
#include "engine.h"

void func_020bdca8(M2C_UNK, M2C_UNK);

extern M2C_UNK data_0213066c;
extern M2C_UNK data_02130678;
extern M2C_UNK data_02130694;
extern M2C_UNK data_021306a0;

void func_020bdfb0(s32 arg0) {
    if (arg0 == 0) {
        func_020bdca8((s32) &data_0213066c, (s32) &data_02130678);
        return;
    }
    if (M2C_FIELD(arg0, s32 *, 4) == 0) {
        func_020bdca8((s32) &data_02130694, (s32) &data_021306a0);
        return;
    }
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
    M2C_FIELD(arg0, s32 *, 0x10) = (s32) M2C_FIELD(arg0, s32 *, 0x20);
    M2C_FIELD(arg0, s32 *, 0x14) = 0;
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
    M2C_FIELD(arg0, s32 *, 0x28) = 0;
    M2C_FIELD(arg0, s32 *, 0x2C) = 0;
    M2C_FIELD(arg0, s32 *, 0x30) = 0;
    M2C_FIELD(arg0, s32 *, 0x34) = 0;
}
