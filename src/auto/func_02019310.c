#include "engine.h"
#include "m2c.h"

void func_020c946c(void);
void func_020ce8a4(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK func_020ced64(void);
void func_020ceda4(M2C_UNK);
void func_020cee34(M2C_UNK);

void func_02019310(void) {
    s32 temp_r4;

    func_020c946c();
    func_020ce8a4(0, 0, 0, 0);
    temp_r4 = func_020ced64();
    func_020cee34(1);
    func_020ceda4(temp_r4);
}
