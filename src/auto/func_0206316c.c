#include "m2c.h"
#include "engine.h"

void func_0206316c(s32 arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x2D8) = arg1;
    M2C_FIELD(arg0, s32 *, 0x2CC) = (s32) M2C_FIELD(arg1, s32 *, 4);
    M2C_FIELD(M2C_FIELD(arg0, void **, 0), M2C_UNK (**)(s32, s32), 0x14C)(arg0, M2C_FIELD(arg1, s32 *, 0));
}
