#include "m2c.h"

M2C_UNK func_02020a28(M2C_UNK);                     /* extern */
M2C_UNK func_02020a8c();                            /* extern */
s32 func_020da9d4(M2C_UNK *, M2C_UNK *);            /* extern */
extern M2C_UNK data_0214a1c0;
extern M2C_UNK data_0214a240;
extern M2C_UNK func_0202186c;

s32 func_02021824(void) {
    M2C_FIELD(&data_0214a1c0, s32 *, 0x3C) = 0x17;
    func_02020a28(3);
    if (func_020da9d4(&func_0202186c, &data_0214a240) == 2) {
        return 1;
    }
    func_02020a8c();
    return 0;
}
