#include "m2c.h"
#include "engine.h"

void func_020ba6f4(M2C_UNK);

extern M2C_UNK data_0214dd28;
extern s8 data_0214dd3c;

void func_020ba9ac(void) {
    s32 var_r4;
    s8 *var_r5;

    if (M2C_FIELD(&data_0214dd28, M2C_UNK (**)(s32), 8) != NULL) {
        M2C_FIELD(&data_0214dd28, M2C_UNK (**)(s32), 8)(M2C_FIELD(&data_0214dd28, s32 *, 4));
    }
    var_r5 = &data_0214dd3c;
    var_r4 = 0;
    do {
        if (*var_r5 == 1) {
            func_020ba6f4((s32) var_r5);
        }
        var_r4 += 1;
        var_r5 += 0xB4;
    } while (var_r4 < 4);
    if (M2C_FIELD(&data_0214dd28, M2C_UNK (**)(s32), 0) == NULL) {
        return;
    }
    M2C_FIELD(&data_0214dd28, M2C_UNK (**)(s32), 0)(M2C_FIELD(&data_0214dd28, s32 *, 0x10));
}
