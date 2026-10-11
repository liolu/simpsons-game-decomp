#include "m2c.h"
#include "engine.h"

void func_0206368c(M2C_UNK, M2C_UNK);

void func_0206628c(s32 arg0) {
    s32 var_r1;

    M2C_FIELD(M2C_FIELD(arg0, void **, 0x88), s32 *, 0x1C) = (s32) M2C_FIELD(arg0, u8 *, 0x30C);
    if (M2C_FIELD(M2C_FIELD(arg0, void **, 0x88), s32 *, 0x1C) != 0) {
        var_r1 = 1;
    } else {
        var_r1 = 0;
    }
    func_0206368c(arg0, var_r1);
}
