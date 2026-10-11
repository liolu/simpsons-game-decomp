#include "m2c.h"
#include "engine.h"

void func_0202f8dc(M2C_UNK);

void func_0202f8b0(s32 arg0) {
    if (M2C_FIELD(arg0, s32 *, 4) == M2C_FIELD(arg0, s32 *, 8)) {
        func_0202f8dc(arg0);
    }
    M2C_FIELD(arg0, s32 *, 4) = (s32) (M2C_FIELD(arg0, s32 *, 4) + 1);
}
