#include "m2c.h"

M2C_UNK func_020ce124(s32);                         /* extern */

s32 func_0201bfc0(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_020ce124(M2C_FIELD(arg0, s32 *, 0xA4) + arg3);
    return arg2;
}
