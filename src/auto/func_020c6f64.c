#include "engine.h"
#include "m2c.h"

extern M2C_UNK data_02153908;

void func_020c6f64(s32 arg0, s32 arg1) {
    M2C_FIELD(&data_02153908, M2C_UNK(**)(s32), 0xDC)(arg1);
}
