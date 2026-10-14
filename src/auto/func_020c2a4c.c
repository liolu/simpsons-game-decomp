#include "m2c.h"

extern M2C_UNK data_02133b5c;
extern M2C_UNK data_02133b60;

s32 func_020c2a4c(s32 arg0, void **arg1) {
    *arg1 = (M2C_UNK *) ((s8 *) &data_02133b60 + (arg0 * 0x3000));
    return *((M2C_UNK *) ((s8 *) &data_02133b5c + (arg0 * 4)));
}
