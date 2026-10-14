#include "engine.h"
#include "m2c.h"

extern M2C_UNK data_02129a50;

void func_02089d28(s32 arg0, s32 arg1) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_02129a50;
    M2C_FIELD(arg0, s32 *, 4)      = (s32) * (M2C_UNK *) arg1;
}
