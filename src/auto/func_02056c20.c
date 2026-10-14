#include "m2c.h"

M2C_UNK func_02013028();                            /* extern */

void *func_02056c20(void *arg0) {
    func_02013028();
    M2C_FIELD(arg0, s8 *, 0x10)  = 0;
    M2C_FIELD(arg0, s16 *, 0x12) = 0;
    return arg0;
}
