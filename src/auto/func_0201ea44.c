#include "m2c.h"

M2C_UNK func_0200f744(s32);                         /* extern */
M2C_UNK func_0201eb84(s32);                         /* extern */
extern s32 data_02149fd8;

void func_0201ea44(void) {
    s32 temp_r4;

    temp_r4 = data_02149fd8;
    if (temp_r4 != 0) {
        func_0201eb84(temp_r4);
        func_0200f744(temp_r4);
    }
    data_02149fd8 = 0;
}
