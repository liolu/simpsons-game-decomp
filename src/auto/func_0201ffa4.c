#include "engine.h"
#include "m2c.h"

void func_0201fa44(M2C_UNK);
M2C_UNK func_020cd940(void);
void func_020cd954(M2C_UNK);
M2C_UNK func_020dd2cc(M2C_UNK, M2C_UNK);
void func_020deec4(M2C_UNK);

extern M2C_UNK data_02149fe4;

void func_0201ffa4(void) {
    s32 temp_r0_2;
    s32 var_r7;
    u16 temp_r0;
    u16 var_r8;

    var_r7 = 1;
    var_r8 = 0;
    do {
        if (M2C_FIELD(&data_02149fe4, u16 *, 0x12) & (1 << var_r7)) {
            if (func_020dd2cc(var_r7, 3) == 0) {
                temp_r0   = ~(1 << var_r7);
                temp_r0_2 = func_020cd940();
                if ((M2C_FIELD(&data_02149fe4, u16 *, 0x10) & (1 << var_r7)) ||
                    (M2C_FIELD(&data_02149fe4, u16 *, 0x12) & (1 << var_r7))) {
                    M2C_FIELD(&data_02149fe4, u16 *, 0x16) = (u16) (M2C_FIELD(&data_02149fe4, u16 *, 0x16) | temp_r0);
                }
                M2C_FIELD(&data_02149fe4, u16 *, 0xA)  = (u16) (M2C_FIELD(&data_02149fe4, u16 *, 0xA) & temp_r0);
                M2C_FIELD(&data_02149fe4, u16 *, 0xC)  = (u16) (M2C_FIELD(&data_02149fe4, u16 *, 0xC) & temp_r0);
                M2C_FIELD(&data_02149fe4, u16 *, 0xE)  = (u16) (M2C_FIELD(&data_02149fe4, u16 *, 0xE) & temp_r0);
                M2C_FIELD(&data_02149fe4, u16 *, 0x10) = (u16) (M2C_FIELD(&data_02149fe4, u16 *, 0x10) & temp_r0);
                M2C_FIELD(&data_02149fe4, u16 *, 0x12) = (u16) (M2C_FIELD(&data_02149fe4, u16 *, 0x12) & temp_r0);
                M2C_FIELD(&data_02149fe4, u16 *, 0x14) = (u16) (M2C_FIELD(&data_02149fe4, u16 *, 0x14) & temp_r0);
                func_020cd954(temp_r0_2);
                func_020deec4(var_r7);
            } else {
                var_r8 |= 1 << var_r7;
            }
        }
        var_r7 = (s32) (u16) (var_r7 + 1);
    } while ((u32) var_r7 < 0x10U);
    if (var_r8 == 0) {
        func_0201fa44(7);
        return;
    }
    func_0201fa44(4);
}
