#include "m2c.h"

M2C_UNK func_020c8218(M2C_UNK *, M2C_UNK);          /* extern */
s32 func_020cd940();                                /* extern */
M2C_UNK func_020cd954(s32);                         /* extern */
extern M2C_UNK data_02148dc4;

void func_0201b40c(M2C_UNK arg0) {
    s32 temp_r4;

    temp_r4 = func_020cd940();
    func_020c8218(&data_02148dc4, arg0);
    func_020cd954(temp_r4);
}
