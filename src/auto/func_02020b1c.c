/* compiler: 2.0/sp1p5 -O2,p */
#include "engine.h"
#include "m2c.h"

void func_02020a8c(M2C_UNK);
void func_02020be4(M2C_UNK);
M2C_UNK func_020d9fe4(void);
M2C_UNK func_020da1d4(void);
M2C_UNK func_020da7bc(M2C_UNK, M2C_UNK);

extern M2C_UNK data_0214a1c0;
extern M2C_UNK data_0214a220;
extern M2C_UNK data_0214a280;

s32 func_02020b1c(void) {
    s32 temp_r0;
    s32 temp_r0_2;

    temp_r0 = func_020da1d4();
    if (temp_r0 == 0x8000) {
        func_02020a8c(3);
        return 0;
    }
    if (temp_r0 == 0) {
        func_02020a8c(0x16);
        return 0;
    }
    if (M2C_FIELD(&data_0214a1c0, u16 *, 0xC) == 0) {
    loop_6:
        M2C_FIELD(&data_0214a1c0, u16 *, 0x64) = (u16) (M2C_FIELD(&data_0214a1c0, u16 *, 0x64) + 1);
        if ((u32) M2C_FIELD(&data_0214a1c0, u16 *, 0x64) > 0x10U) {
            M2C_FIELD(&data_0214a1c0, u16 *, 0x64) = 1U;
        }
        if (!(temp_r0 & (1 << (M2C_FIELD(&data_0214a1c0, u16 *, 0x64) - 1)))) {
            goto loop_6;
        }
    } else {
        M2C_FIELD(&data_0214a1c0, u16 *, 0x64) = (u16) M2C_FIELD(&data_0214a1c0, u16 *, 0xC);
    }
    M2C_FIELD(&data_0214a1c0, s16 *, 0x66)      = (s16) func_020d9fe4();
    M2C_FIELD(&data_0214a1c0, M2C_UNK **, 0x60) = &data_0214a280;
    temp_r0_2                                   = func_020da7bc((s32) func_02020be4, (s32) &data_0214a220);
    if (temp_r0_2 == 2) {
        return 1;
    }
    func_02020a8c(temp_r0_2);
    return 0;
}
