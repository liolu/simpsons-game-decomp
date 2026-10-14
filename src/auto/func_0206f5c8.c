#include "m2c.h"

M2C_UNK func_0202ece8(void *, void *, M2C_UNK);     /* extern */
M2C_UNK func_02061ad4(void *, M2C_UNK);             /* extern */

void func_0206f5c8(void *arg0, void *arg1) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x24);
    switch (temp_r0) {                              /* irregular */
        case 3:
            M2C_FIELD(arg0, s16 *, 0x8C) = (s16) ((s32) (M2C_FIELD(arg1, s16 *, 0) * 4) >> 2);
            M2C_FIELD(arg0, s16 *, 0x8E) = (s16) M2C_FIELD(arg1, s16 *, 2);
            M2C_FIELD(arg0, s16 *, 0x90) = (s16) M2C_FIELD(arg1, s16 *, 4);
            M2C_FIELD(arg0, s16 *, 0x92) = (s16) M2C_FIELD(arg1, s16 *, 6);
            func_0202ece8(arg0 + 0x28, arg1, 0);
            return;
        case 1:
        case 4:
            func_0202ece8(arg0 + 0x28, arg1, 1);
            func_02061ad4(arg0 + 0x28, 1);
            return;
    }
}
