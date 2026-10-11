#include "m2c.h"

M2C_UNK func_0200f744(s32);                         /* extern */
M2C_UNK func_020b45bc(s32);                         /* extern */
extern s32 data_0214d4b0;

void func_020b7204(void) {
    s32 temp_r4;

    temp_r4 = data_0214d4b0;
    if (temp_r4 != 0) {
        func_020b45bc(temp_r4);
        func_0200f744(temp_r4);
    }
    data_0214d4b0 = 0;
}
