#include "m2c.h"
#include "engine.h"

void func_020c20fc(M2C_UNK, M2C_UNK, M2C_UNK);
void func_020c90a4(M2C_UNK);

void func_020c20ac(s32 arg0) {
    M2C_UNK sp4;
    u32 sp0;

    if (arg0 == 0) {
loop_1:
        goto loop_1;
    }
    func_020c90a4(arg0 + 0x20);
    M2C_FIELD(arg0, s16 *, 0x80) = 0;
    func_020c20fc(arg0, (s32) &sp4, (s32) &sp0);
    if (sp0 != 0) {
        M2C_FIELD(arg0, s32 *, 0x1C) = (s32) (M2C_FIELD(arg0, s32 *, 0x1C) + (sp0 >> 1));
    }
}
