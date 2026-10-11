#include "m2c.h"
#include "engine.h"

void func_020777ec(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);

extern M2C_UNK data_0214d008;
extern M2C_UNK data_0214d018;

void func_02077538(void) {
    s32 sp8;
    M2C_UNK *sp4;
    M2C_UNK sp0;

    sp8 = M2C_FIELD(&data_0214d008, s32 *, 0x14);
    sp4 = &data_0214d018;
    func_020777ec((s32) &sp0, (s32) &data_0214d018, (s32) &sp4, (s32) &sp8);
    M2C_FIELD(&data_0214d008, s32 *, 0xC) = 0;
}
