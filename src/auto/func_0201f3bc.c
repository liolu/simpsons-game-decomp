#include "m2c.h"
#include "engine.h"

void func_0201e77c(M2C_UNK);
M2C_UNK func_0201ea04(void);
M2C_UNK func_0201ea7c(void);
void func_0201f1ec(M2C_UNK);
void func_0201f3f8(M2C_UNK);
M2C_UNK func_0201f618(M2C_UNK);
M2C_UNK func_020201a8(void);

void func_0201f3bc(s32 arg0) {
    if (func_0201ea7c() != 0) {
        func_0201e77c(func_0201f618(func_0201ea04()));
    }
    func_0201f3f8(arg0);
    M2C_FIELD(arg0, s32 *, 0xA24) = func_020201a8();
    func_0201f1ec(arg0);
}
