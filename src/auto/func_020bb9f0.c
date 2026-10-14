#include "engine.h"
#include "m2c.h"

void func_020b824c(void);
void func_020b8250(void);
M2C_UNK func_020bba24(M2C_UNK, M2C_UNK, M2C_UNK);

s32 func_020bb9f0(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_r4;

    func_020b824c();
    temp_r4 = func_020bba24(arg0, arg1, arg2);
    func_020b8250();
    return temp_r4;
}
