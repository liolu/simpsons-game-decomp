#include "m2c.h"

M2C_UNK func_02020a74(s32);                         /* extern */
M2C_UNK func_02020a8c();                            /* extern */
M2C_UNK func_02021cc8(M2C_UNK *);                   /* extern */
M2C_UNK func_020cced4(M2C_UNK, s32);                /* extern */
s32 func_020db728(M2C_UNK *, M2C_UNK, M2C_UNK *);   /* extern */
extern M2C_UNK data_0210d6a0;
extern s32 data_0214a1e0;
extern M2C_UNK data_0214a340;
extern M2C_UNK data_0214b7a0;

s32 func_02021ff0(s32 arg0, M2C_UNK arg1) {
    s32 temp_r0;

    func_020cced4(arg1, data_0214a1e0);
    temp_r0 = func_020db728(&data_0214a340, arg1, &data_0214b7a0);
    switch (temp_r0) {                              /* irregular */
    case 0:
        return 1;
    case 7:
        return 1;
    case 5:
        func_02021cc8(&data_0210d6a0);
        func_02020a74(temp_r0);
        return 0;
    default:
        func_02020a8c();
        return 0;
    }
}
