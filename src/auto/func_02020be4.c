#include "m2c.h"

M2C_UNK func_02020a28();                     /* extern */
M2C_UNK func_02020a8c();                            /* extern */
s32 func_02020b1c();                                /* extern */
s32 func_02020d40();                                /* extern */
M2C_UNK func_02021cc8(); /* extern */
M2C_UNK func_020cce9c();          /* extern */
extern M2C_UNK data_0210d0a4;
extern M2C_UNK data_0210d0d4;
extern M2C_UNK data_0210d0ec;
extern M2C_UNK data_0210d100;
extern M2C_UNK data_0214a1c0;
extern M2C_UNK data_0214a280;

void func_02020be4(void *arg0) {
    u16 temp_r0;

    if (M2C_FIELD(arg0, u16 *, 2) != 0) {
        func_02020a8c();
        return;
    }
    if (M2C_FIELD(&data_0214a1c0, s32 *, 0x1C) != 2) {
        return;
    }
    temp_r0 = M2C_FIELD(arg0, u16 *, 8);
    switch (temp_r0) {                              /* irregular */
    case 3:
        return;
    case 5:
        func_02021cc8(&data_0210d0a4, M2C_FIELD(arg0, u8 *, 0xA), M2C_FIELD(arg0, u8 *, 0xB), M2C_FIELD(arg0, u8 *, 0xC), (s32) M2C_FIELD(arg0, u8 *, 0xD), (s32) M2C_FIELD(arg0, u8 *, 0xE), (s32) M2C_FIELD(arg0, u8 *, 0xF));
        if (((u32) M2C_FIELD(arg0, u16 *, 0x36) < 8U) || (M2C_FIELD(arg0, s32 *, 0x3C) != M2C_FIELD(&data_0214a1c0, s32 *, 0x88))) {
            func_02021cc8(&data_0210d0d4);
            goto block_19;
        }
        if (!(M2C_FIELD(arg0, u8 *, 0x43) & 1)) {
            func_02021cc8(&data_0210d0ec);
            goto block_19;
        }
        func_02021cc8(&data_0210d100);
        func_020cce9c(&data_0214a280, 0xC0);
        if (M2C_FIELD(&data_0214a1c0, M2C_UNK (**)(M2C_UNK *), 0x2C) != NULL) {
            M2C_FIELD(&data_0214a1c0, M2C_UNK (**)(M2C_UNK *), 0x2C)(&data_0214a280);
        }
        if (M2C_FIELD(&data_0214a1c0, u16 *, 0xA) != 0) {
            if (func_02020d40() != 0) {
                return;
            }
            func_02020a28(9);
            return;
        }
    default:
    case 4:
block_19:
        if (func_02020b1c() != 0) {
            return;
        }
        func_02020a28(9);
        return;
    }
}
