#include "m2c.h"

s32 func_020120b8(M2C_UNK *);                       /* extern */
M2C_UNK func_020120ec(M2C_UNK *);                   /* extern */
M2C_UNK func_020d7e24(M2C_UNK);                     /* extern */
M2C_UNK func_020d8414(s32);                         /* extern */

void func_02012118(void) {
    M2C_UNK sp0;

    func_020d7e24(1);
    if (func_020120b8(&sp0) == 0) {
        return;
    }
    func_020d8414(0x901);
    func_020120ec(&sp0);
}
