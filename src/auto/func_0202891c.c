#include "m2c.h"

M2C_UNK func_0200f750(s32);                         /* extern */

void *func_0202891c(void *arg0) {
    if ((u32) M2C_FIELD(arg0, u32 *, 8) > 1U) {
        func_0200f750(M2C_FIELD(arg0, s32 *, 0));
    }
    return arg0;
}
