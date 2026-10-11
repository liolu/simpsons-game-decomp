#include "m2c.h"
#include "engine.h"

M2C_UNK func_0201a334(M2C_UNK);
void func_0201bec8(M2C_UNK, M2C_UNK);
void func_0201bf3c(M2C_UNK);
void func_0201bf4c(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
void func_0201bf84(M2C_UNK);
void func_0201bf94(M2C_UNK, M2C_UNK);
void func_0201bfbc(void);
void func_0201bfc0(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
void func_0201bfdc(void);

void func_0201be48(s32 arg0, s32 arg1) {
    if (func_0201a334(arg1) == 0) {
        M2C_FIELD(arg0, void (**)(s32, s32), 0x160) = func_0201bec8;
        M2C_FIELD(arg0, void (**)(s32), 0x164) = func_0201bf3c;
        M2C_FIELD(arg0, void (**)(s32, s32, s32, s32), 0x168) = func_0201bf4c;
        M2C_FIELD(arg0, void (**)(s32), 0x16C) = func_0201bf84;
        return;
    }
    M2C_FIELD(arg0, void (**)(s32, s32), 0x160) = func_0201bf94;
    M2C_FIELD(arg0, void (**)(s32), 0x164) = (void (*)(s32)) func_0201bfbc;
    M2C_FIELD(arg0, void (**)(s32, s32, s32, s32), 0x168) = func_0201bfc0;
    M2C_FIELD(arg0, void (**)(s32), 0x16C) = (void (*)(s32)) func_0201bfdc;
}
