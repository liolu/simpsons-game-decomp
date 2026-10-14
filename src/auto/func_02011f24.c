#include "engine.h"
#include "m2c.h"

s32 func_02011f24(s32 arg0) {
    if (M2C_FIELD(arg0, u8 *, 0x50) != 0) {
        return 0x06820000;
    }
    return 0x06800000;
}
