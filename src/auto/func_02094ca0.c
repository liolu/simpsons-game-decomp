#include "engine.h"
#include "m2c.h"

M2C_UNK func_0201dda0(M2C_UNK);

void func_02094ca0(s32 arg0) {
    M2C_FIELD(arg0, u16 *, 0x14) = (u16) (M2C_FIELD(arg0, u16 *, 0x14) - 1);
    if (M2C_FIELD(arg0, u16 *, 0x14) != 0) {
        return;
    }
    func_0201dda0(arg0);
}
