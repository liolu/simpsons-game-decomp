#include "engine.h"
#include "m2c.h"

M2C_UNK func_020be844(M2C_UNK);
void func_020be940(void);
void func_020be94c(void);

s32 func_020be820(s32 arg0) {
    s32 temp_r4;

    func_020be940();
    temp_r4 = func_020be844(arg0);
    func_020be94c();
    return temp_r4;
}
