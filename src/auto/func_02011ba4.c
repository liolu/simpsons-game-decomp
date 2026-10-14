#include "engine.h"
#include "m2c.h"

extern M2C_UNK data_0210b688;

void func_02011ba4(s32 arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_0210b688;
    M2C_FIELD(arg0, s32 *, 4)      = 0;
    M2C_FIELD(arg0, s32 *, 8)      = 0;
    M2C_FIELD(arg0, s32 *, 0xC)    = 0;
}
