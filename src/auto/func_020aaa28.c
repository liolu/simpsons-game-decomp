#include "m2c.h"
#include "engine.h"

void func_020aba18(M2C_UNK, M2C_UNK);
M2C_UNK func_020ac638(M2C_UNK);

void func_020aaa28(s32 arg0) {
    s32 temp_r0;

    if ((func_020ac638(arg0) != 0) && (M2C_FIELD(arg0, u8 *, 0x294) != 0)) {
        func_020aba18(arg0, 6);
        M2C_FIELD(arg0, s32 *, 0x230) = 0;
        return;
    }
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x228) - 0x199;
    M2C_FIELD(arg0, s32 *, 0x228) = temp_r0;
    if (temp_r0 < 0x1000) {
        M2C_FIELD(arg0, s32 *, 0x228) = 0x1000;
    }
}
