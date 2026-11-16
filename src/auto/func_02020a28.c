/* compiler: 1.2/sp3  */
#include "m2c.h"

M2C_UNK func_02021cc8(M2C_UNK *, s32);              /* extern */
extern M2C_UNK data_0210cfe8;
extern M2C_UNK data_0210d098;
extern M2C_UNK data_0210d0a0;
extern M2C_UNK data_0214a1c0;

void func_02020a28(s32 arg0) {
    func_02021cc8(&data_0210d098, *((M2C_UNK *) ((s8 *) &data_0210cfe8 + (M2C_FIELD(&data_0214a1c0, s32 *, 0x1C) * 4))));
    M2C_FIELD(&data_0214a1c0, s32 *, 0x1C) = arg0;
    func_02021cc8(&data_0210d0a0, *((M2C_UNK *) ((s8 *) &data_0210cfe8 + (arg0 * 4))));
}
