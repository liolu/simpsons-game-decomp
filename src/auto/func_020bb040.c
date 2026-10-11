#include "m2c.h"
#include "engine.h"

M2C_UNK func_020bb064(M2C_UNK);
void func_020bb9d8(void);
void func_020bb9e4(void);

s32 func_020bb040(s32 arg0) {
    s32 temp_r4;

    func_020bb9d8();
    temp_r4 = func_020bb064(arg0);
    func_020bb9e4();
    return temp_r4;
}
