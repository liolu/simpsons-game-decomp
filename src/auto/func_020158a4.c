#include "m2c.h"
#include "engine.h"

s32 func_020158a4(s32 arg0, s32 arg1) {
    if (((s32) M2C_FIELD(arg0, s32 *, 0) <= (s32) M2C_FIELD(arg1, s32 *, 8)) && ((s32) M2C_FIELD(arg0, s32 *, 8) >= (s32) M2C_FIELD(arg1, s32 *, 0))) {
        return 1;
    }
    return 0;
}
