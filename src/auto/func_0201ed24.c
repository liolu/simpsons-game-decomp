#include "engine.h"
#include "m2c.h"

s32 func_0201ed24(s32 arg0) {
    if ((u32) M2C_FIELD(arg0, u8 *, 0x340) < (u32) M2C_FIELD(arg0, u8 *, 0x341)) {
        return 1;
    }
    return 0;
}
