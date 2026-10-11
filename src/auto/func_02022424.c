#include "m2c.h"

M2C_UNK func_02020a28();                     /* extern */
M2C_UNK func_02020a8c();                     /* extern */
s32 func_020213fc();                         /* extern */
extern s16 data_0214a1c6;
extern s16 data_0214a1c8;

s32 func_02022424(void) {
    s32 temp_r0;

    data_0214a1c8 = 0;
    data_0214a1c6 = 0x65;
    func_02020a28(3);
    temp_r0 = func_020213fc(1);
    if (temp_r0 == 0x18) {
        func_02020a8c(0x18);
        return 0;
    }
    if (temp_r0 == 2) {
        return 1;
    }
    func_02020a8c();
    return 0;
}
