#include "engine.h"
#include "m2c.h"

extern void *data_02148d78;

void func_0201a35c(s32 arg0, s32 arg1) {
    M2C_FIELD((M2C_FIELD(data_02148d78, s32 *, 0x84) + (arg0 * 0x10)), s32 *, 0x14) = arg1;
}
