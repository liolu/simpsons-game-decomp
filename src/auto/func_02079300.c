#include "m2c.h"

s32 func_02079300(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x1D0) != 2) {
        return 4;
    }
    if (M2C_FIELD(arg0, u8 *, 0x1C4) != 0) {
        M2C_FIELD(arg0, u16 *, 0x1D6) = (u16) (M2C_FIELD(arg0, u16 *, 0x1D6) - 1);
        if (M2C_FIELD(arg0, u16 *, 0x1D6) == 0) {
            M2C_FIELD(arg0, u16 *, 0x1D6) = 0x1EU;
            return 3;
        }
    }
    return 4;
}
