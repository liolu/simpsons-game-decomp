#include "engine.h"
#include "m2c.h"

void func_020bda44(M2C_UNK, M2C_UNK, M2C_UNK);
void func_020bda78(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);

void func_020b7be8(s32 arg0) {
    func_020bda44(M2C_FIELD(arg0, s32 *, 8), arg0 + 0xAC, arg0 + 0xB0);
    func_020bda78(M2C_FIELD(arg0, s32 *, 8), arg0 + 0xA6, arg0 + 0xA8, arg0 + 0xAA);
}
