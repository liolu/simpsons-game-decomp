#include "m2c.h"

extern s32 data_02153258;

u16 func_020c20fc(void *arg0, s32 *arg1, s32 *arg2) {
    u16 temp_r0;
    u16 temp_r4;

    temp_r4 = *(u16 *)0x04000208;
    *(u16 *)0x04000208 = 0;
    data_02153258 = 1;
    *arg1 = M2C_FIELD(arg0, s32 *, 0x18);
    *arg2 = M2C_FIELD(arg0, s32 *, 0x14);
    data_02153258 = 0;
    temp_r0 = *(u16 *)0x04000208;
    *(u16 *)0x04000208 = temp_r4;
    return temp_r0;
}
