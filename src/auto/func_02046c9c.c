#include "m2c.h"

s32 func_02046c9c(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x68) != 0xFFFF) {
        return 1;
    }
    return 0;
}
