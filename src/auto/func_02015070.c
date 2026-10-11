#include "m2c.h"

s32 func_02015014(void *, s32);                     /* extern */
s32 func_020d5188(M2C_UNK, M2C_UNK);                /* extern */

void func_02015070(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x105C) = func_02015014(arg0, func_020d5188(0x28, 1));
}
