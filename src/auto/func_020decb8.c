#include "engine.h"
#include "m2c.h"

extern void *data_02157158;

s32 func_020decb8(void) {
    if (M2C_FIELD(data_02157158, u8 *, 0x50D) == 1) {
        return 1;
    }
    return 0;
}
