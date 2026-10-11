#include "m2c.h"
#include "engine.h"

M2C_UNK func_0207d750(M2C_UNK);
void func_0207ff04(M2C_UNK);

void func_0207fe30(s32 arg0) {
    func_0207ff04(arg0);
    if (func_0207d750(M2C_FIELD(arg0, s32 *, 0x38C)) > 0) {
        return;
    }
    M2C_FIELD(M2C_FIELD(arg0, s32 *, 0x38C), s8 *, 0x24) = 0;
    M2C_FIELD(M2C_FIELD(arg0, s32 *, 0x38C), s32 *, 0x20) = 6;
}
