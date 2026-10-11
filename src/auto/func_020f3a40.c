#include "m2c.h"
#include "engine.h"

M2C_UNK func_020e5ff8(M2C_UNK, M2C_UNK);

s32 func_020f3a40(s32 arg0, s32 arg1) {
    if ((arg0 == arg1) || (func_020e5ff8(M2C_FIELD(arg0, s32 *, 4), M2C_FIELD(arg1, s32 *, 4)) == 0)) {
        return 1;
    }
    return 0;
}
