#include "m2c.h"
#include "engine.h"

void func_0202afa0(M2C_UNK, M2C_UNK);

void func_020549c8(s32 arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x44) = arg1;
    func_0202afa0(arg0 + 0x14, arg1);
}
