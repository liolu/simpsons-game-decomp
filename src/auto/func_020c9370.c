#include "m2c.h"
#include "engine.h"

void func_020c82a4(M2C_UNK, M2C_UNK);
void func_020c8d78(M2C_UNK);
void func_020c8de8(M2C_UNK);

extern s32 data_02153a04;
extern M2C_UNK data_02153a08;

void func_020c9370(s32 arg0) {
    if (data_02153a04 == 0) {
        func_020c82a4((s32) &data_02153a08, 0);
        data_02153a04 = 1;
    }
    M2C_FIELD(arg0, void (**)(s32), 8) = func_020c8de8;
    M2C_FIELD(arg0, volatile s32 *, 0xC) = arg0;
    M2C_FIELD(arg0, void (**)(s32), 0x14) = func_020c8d78;
    M2C_FIELD(arg0, volatile s32 *, 0x18) = arg0;
    M2C_FIELD(arg0, volatile s32 *, 0x44) = 0;
    M2C_FIELD(arg0, volatile s32 *, 0x48) = 0;
    M2C_FIELD(arg0, volatile s32 *, 0x24) = (s32) (M2C_FIELD(arg0, volatile s32 *, 0x24) & ~1);
    M2C_FIELD(arg0, volatile s32 *, 0x24) = (s32) (M2C_FIELD(arg0, volatile s32 *, 0x24) & ~2);
}
