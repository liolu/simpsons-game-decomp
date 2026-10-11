#include "m2c.h"
#include "engine.h"

void func_020bf860(M2C_UNK);
void func_020bf9d4(M2C_UNK);
M2C_UNK func_020bfa90(M2C_UNK, M2C_UNK);
void func_020e2588(M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK func_020e5e44(M2C_UNK);

extern M2C_UNK data_02130df8;
extern M2C_UNK data_02130e20;
extern s8 data_02152b38;

void func_020bfa14(s32 arg0) {
    s32 temp_r0;

    if (arg0 == 0) {
        func_020bf860((s32) &data_02130df8);
        return;
    }
    temp_r0 = func_020e5e44(arg0);
    if (temp_r0 == 0) {
        data_02152b38 = 0;
        return;
    }
    func_020bf9d4(arg0);
    if (func_020bfa90(arg0, temp_r0) == 1) {
        func_020e2588((s32) &data_02152b38, arg0, temp_r0 + 1);
        return;
    }
    func_020bf860((s32) &data_02130e20);
}
