#include "m2c.h"

M2C_UNK func_02021cc8(M2C_UNK *);                   /* extern */
s32 func_020dbaa8(M2C_UNK *);                       /* extern */
extern M2C_UNK data_0210d670;
extern M2C_UNK data_0210d684;
extern s32 data_0214a1f4;
extern M2C_UNK data_0214a340;

s32 func_02021fa8(void) {
    s32 temp_r0;

    func_02021cc8(&data_0210d670);
    temp_r0 = func_020dbaa8(&data_0214a340);
    data_0214a1f4 = temp_r0;
    if (temp_r0 == 0) {
        return 1;
    }
    func_02021cc8(&data_0210d684);
    return 0;
}
