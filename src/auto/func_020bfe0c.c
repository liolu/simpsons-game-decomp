#include "engine.h"
#include "m2c.h"

void func_020bf860(M2C_UNK);
void func_020bfce0(M2C_UNK);

extern M2C_UNK data_02130f04;
extern M2C_UNK data_02130f20;

void func_020bfe0c(s32 arg0) {
    M2C_UNK (*temp_r1)(s32);

    if (arg0 == 0) {
        func_020bf860((s32) &data_02130f04);
        return;
    }
    temp_r1 = M2C_FIELD(M2C_FIELD(arg0, void **, 0), M2C_UNK(**)(s32), 0x14);
    if (temp_r1 != NULL) {
        temp_r1(M2C_FIELD(arg0, s32 *, 4));
        func_020bfce0(arg0);
        return;
    }
    func_020bf860((s32) &data_02130f20);
}
