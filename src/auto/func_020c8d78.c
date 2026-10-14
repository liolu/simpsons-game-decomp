#include "engine.h"
#include "m2c.h"

void func_020c8e34(M2C_UNK, M2C_UNK);
M2C_UNK func_020cd940(void);
void func_020cd954(M2C_UNK);
void func_020ce914(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);

void func_020c8d78(s32 arg0) {
    s32 temp_r6;

    if (((s32) (M2C_FIELD(arg0, s32 *, 0x24) << 0x1E) >> 0x1F) == 0) {
        return;
    }
    if (M2C_FIELD(arg0, s32 *, 0x38) != 0) {
        do {
            temp_r6 = func_020cd940();
            func_020c8e34(arg0, 1);
            func_020cd954(temp_r6);
        } while (M2C_FIELD(arg0, s32 *, 0x38) != 0);
    }
    func_020ce914(M2C_FIELD(arg0, s32 *, 0x44), 0, 1 << M2C_FIELD(arg0, s32 *, 0x40), 0);
}
