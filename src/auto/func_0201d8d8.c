#include "m2c.h"

M2C_UNK func_0201c448(s32);                         /* extern */

void func_0201d8d8(void *arg0, s32 arg1) {
    func_0201c448(arg0 + 0x1C);
    M2C_FIELD(arg0, s32 *, 0x18) = arg1;
    M2C_FIELD(arg0, s8 *, 0x14) = 0;
    M2C_FIELD(arg0, s8 *, 0x15) = 1;
}
