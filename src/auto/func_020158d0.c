#include "engine.h"
#include "m2c.h"

s32 func_020158d0(s32 arg0, s32 arg1) {
    if (((s32) M2C_FIELD(arg0, s32 *, 4) <= (s32) M2C_FIELD(arg1, s32 *, 0xC)) &&
        ((s32) M2C_FIELD(arg0, s32 *, 0xC) >= (s32) M2C_FIELD(arg1, s32 *, 4))) {
        return 1;
    }
    return 0;
}
