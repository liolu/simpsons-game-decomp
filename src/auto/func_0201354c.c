#include "m2c.h"
#include "engine.h"

void func_02012f00(M2C_UNK, M2C_UNK);

void func_0201354c(s32 arg0, s32 arg1, s32 arg2) {
    func_02012f00(arg0, M2C_FIELD(((arg2 * 0x18) + arg1), s32 *, 0x10));
}
