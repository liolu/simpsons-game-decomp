#include "m2c.h"
#include "engine.h"

void func_0207d744(M2C_UNK);

void func_0207add8(s32 arg0) {
    func_0207d744(M2C_FIELD(arg0, s32 *, 0x368));
    M2C_FIELD(M2C_FIELD(arg0, s32 *, 0x368), s8 *, 0x24) = 0;
    M2C_FIELD(M2C_FIELD(arg0, s32 *, 0x368), s32 *, 0x20) = 6;
}
