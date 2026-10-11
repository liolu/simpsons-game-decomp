#include "m2c.h"

s32 func_020894a8(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x2CC) != 0x1E) {
        return 1;
    }
    return 0;
}
