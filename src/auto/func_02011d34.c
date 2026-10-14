#include "engine.h"
#include "m2c.h"

void func_02011d5c(M2C_UNK);
void func_02011e08(void);
void func_02011e68(M2C_UNK, M2C_UNK);

void func_02011d34(s32 arg0, s32 arg1) {
    func_02011e08();
    func_02011e68(arg0, arg1);
    func_02011d5c(arg0);
}
