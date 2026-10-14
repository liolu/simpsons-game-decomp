#include "engine.h"
#include "m2c.h"

M2C_UNK func_020bae78(M2C_UNK, M2C_UNK);
void func_020bb9d8(void);
void func_020bb9e4(void);

s32 func_020bae4c(s32 arg0, s32 arg1) {
    s32 temp_r4;

    func_020bb9d8();
    temp_r4 = func_020bae78(arg0, arg1);
    func_020bb9e4();
    return temp_r4;
}
