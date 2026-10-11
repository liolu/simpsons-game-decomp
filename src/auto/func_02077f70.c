#include "m2c.h"

s32 func_02077f70(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x1C4) != 4) {
        return 6;
    }
    M2C_FIELD(arg0, u16 *, 0x1C8) = (u16) (M2C_FIELD(arg0, u16 *, 0x1C8) + 1);
    if (M2C_FIELD(arg0, u16 *, 0x1C8) == 0x1E) {
        return 1;
    }
    return 6;
}
