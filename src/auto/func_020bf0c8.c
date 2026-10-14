#include "m2c.h"

M2C_UNK func_020bead0();                            /* extern */
M2C_UNK func_020beae0();                            /* extern */
s32 func_020d12c0(void *, s32, s32);                /* extern */
s32 func_020f17a8(s32, s32);                        /* extern */
extern s32 data_02152054;

void func_020bf0c8(void *arg0) {
    s32 temp_r0;
    s32 var_r0;

    if (M2C_FIELD(arg0, s8 *, 1) == 2) {
        if (M2C_FIELD(arg0, s32 *, 0x74) == 1) {
            temp_r0 =
                func_020d12c0(M2C_FIELD(arg0, void **, 0x4C), M2C_FIELD(arg0, s32 *, 0x50), M2C_FIELD(arg0, s32 *, 0x70));
            if ((s32) M2C_FIELD(arg0, s32 *, 0x70) > 0) {
                M2C_FIELD(arg0, s32 *, 0x70) = temp_r0;
                M2C_FIELD(arg0, s32 *, 0x74) = 0;
                M2C_FIELD(arg0, s32 *, 0x78) = 1;
            }
        }
        if (M2C_FIELD(arg0, s32 *, 0x78) == 1) {
            if (M2C_FIELD(M2C_FIELD(arg0, void **, 0x4C), s32 *, 0xC) & 1) {
                var_r0 = 1;
            } else {
                var_r0 = 0;
            }
            if (var_r0 == 0) {
                func_020bead0();
                M2C_FIELD(arg0, s32 *, 0x78) = 0;
                M2C_FIELD(arg0, s8 *, 1)     = 1;
                M2C_FIELD(arg0, s32 *, 0x60) =
                    (s32) (M2C_FIELD(arg0, s32 *, 0x60) +
                           func_020f17a8(M2C_FIELD(arg0, s32 *, 0x70), M2C_FIELD(arg0, s32 *, 0x54)));
                M2C_FIELD(arg0, s32 *, 0x64) = (s32) M2C_FIELD(arg0, s32 *, 0x70);
                M2C_FIELD(arg0, s32 *, 0x68) = 0;
                func_020beae0();
            }
        }
    }
    data_02152054 = 0;
}
