#include "engine.h"
#include "m2c.h"

extern M2C_UNK data_0212559c;

void func_020825d4(s32 arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_0212559c;
    M2C_FIELD(arg0, s32 *, 4)      = 0;
}
