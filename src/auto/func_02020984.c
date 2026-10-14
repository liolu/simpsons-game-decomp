#include "m2c.h"

M2C_UNK func_02021cc8(M2C_UNK *, M2C_UNK);          /* extern */
extern M2C_UNK data_0210d040;
extern M2C_UNK data_0214a1c0;

void func_02020984(void) {
    func_02021cc8(&data_0210d040, 0x200);
    M2C_FIELD(&data_0214a1c0, s16 *, 4)    = 0;
    M2C_FIELD(&data_0214a1c0, s16 *, 2)    = 1;
    M2C_FIELD(&data_0214a1c0, s32 *, 0x34) = 0;
    M2C_FIELD(&data_0214a1c0, s32 *, 0x28) = 0;
}
