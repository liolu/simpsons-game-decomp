#include "m2c.h"
#include "engine.h"

M2C_UNK func_0201ea04(void);
M2C_UNK func_0201f618(M2C_UNK);
void func_020e2588(M2C_UNK, M2C_UNK, M2C_UNK);

void func_0201edb8(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_r4;

    temp_r4 = arg0 + (M2C_FIELD(arg0, volatile u8 *, 0x340) * 4);
    func_020e2588((func_0201f618(func_0201ea04()) + 0x10 + (M2C_FIELD(arg0, volatile u8 *, 0x340) * 4)) - (arg1 * 4), temp_r4, arg2);
}
