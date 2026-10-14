#include "engine.h"
#include "m2c.h"

void func_020c61b0(M2C_UNK);

s32 func_020c63b4(s32 arg0, s32 arg1) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0xC) < arg1) {
        func_020c61b0(arg0);
    }
    if (arg1 > (s32) M2C_FIELD(arg0, s32 *, 0xC)) {
        return 0;
    }
    return 1;
}
