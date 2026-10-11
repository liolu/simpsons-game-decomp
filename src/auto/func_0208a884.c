#include "m2c.h"

s32 func_0208a884(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x2CC) != 0x1D) {
        return 0x2F;
    }
    if (M2C_FIELD(arg0, u8 *, 0x178) != 0) {
        return 0x2F;
    }
    return 0x1D;
}
