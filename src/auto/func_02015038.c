#include "m2c.h"

s32 func_02015014(void *, s32);                     /* extern */
s32 func_020d526c(M2C_UNK *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
extern M2C_UNK data_0212d51c;

void func_02015038(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x1058) = func_02015014(arg0, func_020d526c(&data_0212d51c, -1, 0, 0));
}
