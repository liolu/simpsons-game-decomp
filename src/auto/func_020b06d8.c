#include "engine.h"
#include "m2c.h"

M2C_UNK func_02017d84(M2C_UNK, M2C_UNK);
void func_020b04bc(M2C_UNK, M2C_UNK);

extern M2C_UNK data_02103a64;

void func_020b06d8(s32 arg0) {
    if (M2C_FIELD(*((M2C_UNK *) ((s8 *) &data_02103a64 + (M2C_FIELD(arg0, s32 *, 0x1E4) * 0x24))), s32 *, 0x38) == 0) {
        func_020b04bc(arg0, 1);
    } else if (func_02017d84(0, 0x63) < 0x32) {
        func_020b04bc(arg0, 1);
    } else {
        func_020b04bc(arg0, 2);
    }
    M2C_FIELD(arg0, s32 *, 0x1E8) = (s32) (func_02017d84(0, 0x3C) + 0x1E);
}
