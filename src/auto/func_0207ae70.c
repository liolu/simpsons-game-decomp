#include "engine.h"
#include "m2c.h"

void func_0207aea8(M2C_UNK);
M2C_UNK func_0207d750(M2C_UNK);

void func_0207ae70(s32 arg0) {
    func_0207aea8(arg0);
    if (func_0207d750(M2C_FIELD(arg0, s32 *, 0x368)) > 0) {
        return;
    }
    M2C_FIELD(M2C_FIELD(arg0, s32 *, 0x368), s8 *, 0x24)  = 0;
    M2C_FIELD(M2C_FIELD(arg0, s32 *, 0x368), s32 *, 0x20) = 6;
}
