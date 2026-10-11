/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020cd940();                                /* extern */
M2C_UNK func_020cd954(s32);                         /* extern */
M2C_UNK func_020cfbb8(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_020d95d0();                            /* extern */
s32 func_020d99d0(M2C_UNK, M2C_UNK);                /* extern */
s32 func_020d9ad4();                                /* extern */
extern s16 data_02156588;
extern s32 data_0215658c;

s32 func_020d9cbc(void) {
    s32 temp_r0;
    s32 temp_r4;

    temp_r4 = func_020cd940();
    if (func_020d9ad4() != 0) {
        func_020cd954(temp_r4);
        return 3;
    }
    temp_r0 = func_020d99d0(1, 0);
    if (temp_r0 != 0) {
        return temp_r0;
    }
    func_020d95d0();
    func_020cfbb8(0xA, 0);
    data_0215658c = 0;
    data_02156588 = 0;
    func_020cd954(temp_r4);
    return 0;
}
