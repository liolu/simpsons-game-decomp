#include "engine.h"
#include "m2c.h"

void func_02015580(s32 arg0) {
    if (arg0 == 0) {
        return;
    }
    M2C_FIELD(*(M2C_UNK *) arg0, M2C_UNK(**)(), 4)(arg0);
}
