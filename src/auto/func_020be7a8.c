#include "m2c.h"
#include "engine.h"

M2C_UNK func_020be7cc(M2C_UNK);
void func_020be940(void);
void func_020be94c(void);

s32 func_020be7a8(s32 arg0) {
    s32 temp_r4;

    func_020be940();
    temp_r4 = func_020be7cc(arg0);
    func_020be94c();
    return temp_r4;
}
