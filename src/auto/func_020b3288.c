#include "m2c.h"

M2C_UNK func_0201c148(s32, s32);                    /* extern */
extern M2C_UNK data_021054a0;

s32 func_020b3288(s32 arg0, s32 arg1) {
    s32 temp_r4;

    if ((arg0 < 0x1F) && (arg1 < 0x1F)) {
        temp_r4 = *((M2C_UNK *)((s8 *)&data_021054a0 + (arg0 * 4)));
        func_0201c148(temp_r4, *((M2C_UNK *)((s8 *)&data_021054a0 + (arg1 * 4))));
        return temp_r4;
    }
    return 0x1F;
}
