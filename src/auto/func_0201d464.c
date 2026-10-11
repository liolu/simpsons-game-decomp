#include "m2c.h"

M2C_UNK func_02019480(M2C_UNK);                     /* extern */
s32 func_0201a39c(M2C_UNK, M2C_UNK);                /* extern */
M2C_UNK func_0201ad8c(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
s32 func_0201c220();                                /* extern */
M2C_UNK func_0201c2dc(M2C_UNK, s32, M2C_UNK);       /* extern */

void func_0201d464(M2C_UNK arg0, M2C_UNK arg1) {
    s32 var_r0;

    if (func_0201a39c(arg1, 1) != 0) {
        var_r0 = 1;
    } else {
        var_r0 = 0;
    }
    if (var_r0 == 0) {
        return;
    }
    func_02019480(arg0);
    func_0201ad8c(arg0, arg1, 1);
    func_0201c2dc(arg0, func_0201c220(), 0);
}
