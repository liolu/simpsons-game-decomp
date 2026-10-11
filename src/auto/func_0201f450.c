#include "m2c.h"

M2C_UNK func_0200f5e8(s32, s32, M2C_UNK);           /* extern */
M2C_UNK func_0201ecfc(s32);                         /* extern */
s32 func_0201ed24(s32);                             /* extern */

void func_0201f450(s32 arg0) {
    s32 temp_r4;
    s32 var_r5;
    s8 var_r9;

    func_0201ecfc(arg0 + 0x6D4);
    temp_r4 = arg0 + 0x4C;
    var_r5 = temp_r4 + 0x344;
    var_r9 = 1;
    do {
        if (func_0201ed24(var_r5) != 0) {
            func_0200f5e8(((var_r9 + 1) * 0x344) + temp_r4, var_r5, 0x344);
        } else {
            func_0201ecfc(var_r5);
        }
        var_r5 -= 0x344;
        var_r9 -= 1;
    } while ((s32) var_r9 >= 0);
    func_0201ecfc(arg0 + 0x4C);
}
