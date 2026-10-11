#include "m2c.h"

M2C_UNK func_02020a28();                     /* extern */
M2C_UNK func_02020a8c();                            /* extern */
s32 func_020213fc();                             /* extern */
M2C_UNK func_02021cc8();         /* extern */
extern M2C_UNK data_0210d3c4;
extern M2C_UNK data_0210d3dc;
extern M2C_UNK data_0210d3f4;
extern M2C_UNK data_0214a1c0;

void func_02021774(void *arg0) {
    s32 temp_r0;
    u16 temp_r2;
    u16 temp_r3;

    if (M2C_FIELD(arg0, u16 *, 2) != 0) {
        func_02020a8c();
        return;
    }
    func_02021cc8(&data_0210d3c4, M2C_FIELD(arg0, u16 *, 8), M2C_FIELD(arg0, u16 *, 0xA));
    temp_r2 = M2C_FIELD(arg0, u16 *, 0xA);
    temp_r3 = M2C_FIELD(arg0, u16 *, 8);
    if ((u32) M2C_FIELD(&data_0214a1c0, u16 *, 6) > (u32) temp_r2) {
        M2C_FIELD(&data_0214a1c0, u16 *, 6) = temp_r2;
        M2C_FIELD(&data_0214a1c0, u16 *, 8) = temp_r3;
    }
    temp_r0 = func_020213fc((u16) (temp_r3 + 1));
    if (temp_r0 == 0x18) {
        func_02021cc8(&data_0210d3dc, M2C_FIELD(&data_0214a1c0, u16 *, 8));
        func_02020a28(7);
        func_02021cc8(&data_0210d3f4);
    } else if (temp_r0 != 2) {
        func_02020a8c();
    }
    M2C_FIELD(&data_0214a1c0, s32 *, 0x3C) = 0x12;
}
