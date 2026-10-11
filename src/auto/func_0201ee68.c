#include "m2c.h"
#include "engine.h"

void func_020e2588(M2C_UNK, M2C_UNK, M2C_UNK);

void func_0201ee68(s32 arg0, s32 arg1, s32 arg2) {
    func_020e2588(arg0 + (M2C_FIELD(arg0, u8 *, 0x340) * 4), arg1, arg2 * 4);
    M2C_FIELD(arg0, u8 *, 0x340) = (u8) (M2C_FIELD(arg0, u8 *, 0x340) + arg2);
}
