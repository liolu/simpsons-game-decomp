/* compiler: 2.0/sp1p5 -O4,s */
#include "engine.h"
#include "m2c.h"

extern s8 data_02103a4c;
extern void **data_02144e70;
extern M2C_UNK data_0214d438;
extern M2C_UNK data_0214d444;

void func_020aefd0(void) {
    s32 var_r2;
    s32 var_r3;
    s32 var_r4;
    s8 *var_ip;

    var_r4 = 0xE;
    if (M2C_FIELD(*data_02144e70, s32(**)(void **, M2C_UNK, M2C_UNK), 4)(data_02144e70, 0xA, -1) != 0) {
        var_r4 = 0xA;
    }
    if (M2C_FIELD(*data_02144e70, s32(**)(void **, M2C_UNK, M2C_UNK), 4)(data_02144e70, 0xB, -1) != 0) {
        var_r4 = 0xB;
    }
    if (M2C_FIELD(*data_02144e70, s32(**)(void **, M2C_UNK, M2C_UNK), 4)(data_02144e70, 0, -1) != 0) {
        var_r4 = 0;
    }
    if (M2C_FIELD(*data_02144e70, s32(**)(void **, M2C_UNK, M2C_UNK), 4)(data_02144e70, 1, -1) != 0) {
        var_r4 = 1;
    }
    if (M2C_FIELD(*data_02144e70, s32(**)(void **, M2C_UNK, M2C_UNK), 4)(data_02144e70, 9, -1) != 0) {
        var_r4 = 9;
    }
    if (var_r4 == 0xE) {
        return;
    }
    var_r2 = 0;
    do {
        *((M2C_UNK *) ((s8 *) &data_0214d444 + (var_r2 * 4))) =
            M2C_FIELD(((M2C_UNK *) ((s8 *) &data_0214d444 + (var_r2 * 4))), s32 *, 4);
        var_r2 += 1;
    } while (var_r2 < 0xD);
    var_ip                                 = &data_02103a4c;
    M2C_FIELD(&data_0214d438, s32 *, 0x40) = var_r4;
    var_r3                                 = 0;
loop_15:
    if (*var_ip != (s8) * ((M2C_UNK *) ((s8 *) &data_0214d444 + (var_r3 * 4)))) {
        return;
    }
    var_r3 += 1;
    var_ip += 1;
    if (var_r3 >= 0xE) {
        return;
    }
    goto loop_15;
}
