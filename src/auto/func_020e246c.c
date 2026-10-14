#include "engine.h"
#include "m2c.h"

extern M2C_UNK data_02137020;

s32 func_020e246c(s32 arg0, s32 arg1) {
    return M2C_FIELD(M2C_FIELD(&data_02137020, void **, 8), s32(**)(), 4)(arg0, arg1);
}
