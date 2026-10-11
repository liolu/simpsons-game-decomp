#include "m2c.h"
#include "engine.h"

void func_020b8234(void);
void func_020b8240(void);
void func_020ba9ac(void);
void func_020bd888(M2C_UNK);
void func_020c09e0(void);

extern s8 data_0214da08;
extern M2C_UNK data_0214e40c;

void func_020bc770(void) {
    s32 var_r4;
    s8 *var_r5;

    func_020b8234();
    if (M2C_FIELD(&data_0214e40c, s32 *, 0x24) != 0) {
        func_020b8240();
        return;
    }
    M2C_FIELD(&data_0214e40c, s32 *, 0x24) = 1;
    func_020b8240();
    if (M2C_FIELD(&data_0214e40c, M2C_UNK (**)(s32), 0x18) != NULL) {
        M2C_FIELD(&data_0214e40c, M2C_UNK (**)(s32), 0x18)(M2C_FIELD(&data_0214e40c, s32 *, 0x14));
    }
    func_020ba9ac();
    var_r5 = &data_0214da08;
    M2C_FIELD(&data_0214e40c, s32 *, 0x24) = 2;
    var_r4 = 0;
    do {
        if (*var_r5 == 1) {
            func_020bd888((s32) var_r5);
        }
        var_r4 += 1;
        var_r5 += 0xC4;
    } while (var_r4 < 4);
    M2C_FIELD(&data_0214e40c, s32 *, 0x24) = 3;
    if (M2C_FIELD(&data_0214e40c, M2C_UNK (**)(s32), 8) != NULL) {
        M2C_FIELD(&data_0214e40c, M2C_UNK (**)(s32), 8)(M2C_FIELD(&data_0214e40c, s32 *, 4));
    }
    func_020c09e0();
    if (M2C_FIELD(&data_0214e40c, M2C_UNK (**)(s32), 0) != NULL) {
        M2C_FIELD(&data_0214e40c, M2C_UNK (**)(s32), 0)(M2C_FIELD(&data_0214e40c, s32 *, 0x1C));
    }
    M2C_FIELD(&data_0214e40c, s32 *, 0x24) = 0;
    if (M2C_FIELD(&data_0214e40c, M2C_UNK (**)(s32), 0x10) == NULL) {
        return;
    }
    M2C_FIELD(&data_0214e40c, M2C_UNK (**)(s32), 0x10)(M2C_FIELD(&data_0214e40c, s32 *, 0xC));
}
