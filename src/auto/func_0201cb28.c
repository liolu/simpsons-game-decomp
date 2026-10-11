#include "m2c.h"
#include "engine.h"

M2C_UNK func_02019f68(M2C_UNK);
M2C_UNK func_0201a334(M2C_UNK);
void func_0201a35c(M2C_UNK, M2C_UNK);
M2C_UNK func_020cd940(void);
void func_020cd954(M2C_UNK);

void func_0201cb28(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_r4;
    s32 temp_r5;

    if (arg1 == 0) {
        return;
    }
    temp_r5 = func_020cd940();
    temp_r4 = func_02019f68(arg1);
    if (arg0 == func_0201a334(arg2)) {
        func_0201a35c(arg2, 0);
    }
    func_02019f68(temp_r4);
    func_020cd954(temp_r5);
}
