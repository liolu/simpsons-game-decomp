#include "m2c.h"
#include "engine.h"

extern M2C_UNK data_0214e40c;

void func_020bbd48(s32 arg0) {
    if (M2C_FIELD(&data_0214e40c, M2C_UNK (**)(), 0x30) == NULL) {
        return;
    }
    M2C_FIELD(&data_0214e40c, M2C_UNK (**)(), 0x30)(arg0);
}
