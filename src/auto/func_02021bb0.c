#include "m2c.h"

M2C_UNK func_020206cc();                            /* extern */
M2C_UNK func_02020a28(M2C_UNK);                     /* extern */
M2C_UNK func_02020a8c(s32);                         /* extern */
M2C_UNK func_02020aa8(M2C_UNK);                     /* extern */
M2C_UNK func_02021cc8(M2C_UNK *);                   /* extern */
s32 func_020dab24(M2C_UNK *);                       /* extern */
extern M2C_UNK data_0210d298;
extern M2C_UNK data_0210d480;
extern M2C_UNK data_0214a1c0;
extern M2C_UNK func_02021c74;

s32 func_02021bb0(void) {
    s32 temp_r0;

    M2C_FIELD(&data_0214a1c0, s32 *, 0x3C) = 0x13;
    M2C_FIELD(&data_0214a1c0, s32 *, 0x34) = 0;
    temp_r0                                = func_020dab24(&func_02021c74);
    switch (temp_r0) {                              /* irregular */
        case 0:
            if (M2C_FIELD(&data_0214a1c0, s32 *, 0x1C) != 0) {
                func_02020a28(1);
            }
            return 1;
        case 2:
            func_02020aa8(0x14);
            if (M2C_FIELD(&data_0214a1c0, s32 *, 0x34) == 0) {
                if (M2C_FIELD(&data_0214a1c0, s32 *, 0x1C) != 0) {
                    func_02020a28(1);
                }
                return 1;
            }
            func_02021cc8(&data_0210d298);
            return 0;
        default:
            func_020206cc();
            func_02021cc8(&data_0210d480);
            func_02020a8c(temp_r0);
            return 0;
    }
}
