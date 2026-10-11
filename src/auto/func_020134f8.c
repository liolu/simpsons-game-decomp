#include "m2c.h"
#include "engine.h"

M2C_UNK func_02012b30(M2C_UNK);
M2C_UNK func_02012b44(M2C_UNK, M2C_UNK);
M2C_UNK func_02013290(M2C_UNK);

void func_020134f8(s32 arg0, s32 arg1, s32 arg2) {
    if ((arg2 < 0) || (arg2 >= func_02013290(arg1)) || (M2C_FIELD(arg1, s32 *, 8) == 0)) {
        *(M2C_UNK *)arg0 = 0;
        return;
    }
    *(M2C_UNK *)arg0 = func_02012b44(func_02012b30(arg1), arg2);
}
