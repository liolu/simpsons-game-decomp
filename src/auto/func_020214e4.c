#include "m2c.h"

M2C_UNK func_02020a28(M2C_UNK);                     /* extern */
M2C_UNK func_02020a8c(s32);                         /* extern */
M2C_UNK func_02020aa8(M2C_UNK);                     /* extern */
s32 func_020215b4();                                /* extern */
M2C_UNK func_02021cc8(M2C_UNK *);                   /* extern */
s32 func_020dabcc(M2C_UNK *);                       /* extern */
extern M2C_UNK data_0210d27c;
extern M2C_UNK data_0210d298;
extern M2C_UNK data_0210d2b4;
extern M2C_UNK data_0214a1c0;
extern M2C_UNK func_0202158c;

s32 func_020214e4(void) {
    s32 temp_r0;

    M2C_FIELD(&data_0214a1c0, s32 *, 0x3C) = 0xD;
    M2C_FIELD(&data_0214a1c0, s32 *, 0x34) = 0;
    func_02020a28(3);
    temp_r0 = func_020dabcc(&func_0202158c);
    switch (temp_r0) {                              /* irregular */
    case 0:
        return func_020215b4();
    case 2:
        func_02020aa8(0xE);
        if (M2C_FIELD(&data_0214a1c0, s32 *, 0x34) == 0) {
            func_02021cc8(&data_0210d27c);
            return func_020215b4();
        }
        func_02021cc8(&data_0210d298);
        return 0;
    default:
        func_02021cc8(&data_0210d2b4);
        func_02020a8c(temp_r0);
        return 0;
    }
}
