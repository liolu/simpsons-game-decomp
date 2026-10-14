#include "engine.h"
#include "m2c.h"

void func_02019174(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
void func_0204f1a0(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);

extern M2C_UNK data_0214cd34;
extern M2C_UNK data_0214cd50;
extern M2C_UNK data_0214cd58;

void func_0204db70(void) {
    s32 sp14;
    M2C_UNK *sp10;
    M2C_UNK spC;
    s32 sp8;
    M2C_UNK *sp4;
    M2C_UNK sp0;

    sp14 = M2C_FIELD(&data_0214cd34, s32 *, 0x28);
    sp10 = &data_0214cd58;
    func_02019174((s32) &spC, (s32) &data_0214cd58, (s32) &sp10, (s32) &sp14);
    sp8 = M2C_FIELD(&data_0214cd34, s32 *, 0x20);
    sp4 = &data_0214cd50;
    func_0204f1a0((s32) &sp0, (s32) &data_0214cd50, (s32) &sp4, (s32) &sp8);
    M2C_FIELD(&data_0214cd34, s32 *, 8)    = 0;
    M2C_FIELD(&data_0214cd34, s32 *, 0x10) = 0;
}
