#include "engine.h"
#include "m2c.h"

void func_020192d4(void);
void func_0201c108(M2C_UNK);
M2C_UNK func_0201c1b4(void);
M2C_UNK func_0201c300(M2C_UNK);
M2C_UNK func_0201d358(M2C_UNK);
void func_0201d36c(M2C_UNK);

extern M2C_UNK data_02149c20;

void func_0201c0ac(void) {
    func_020192d4();
    if (func_0201c300(func_0201c1b4()) != 0) {
        return;
    }
    if (func_0201d358(func_0201c1b4()) != 0) {
        func_0201d36c(func_0201c1b4());
        return;
    }
    if (M2C_FIELD(&data_02149c20, s32 *, 0xB4) == 0x1F) {
        return;
    }
    func_0201c108(M2C_FIELD(&data_02149c20, s32 *, 0xB4));
    M2C_FIELD(&data_02149c20, s32 *, 0xB4) = 0x1F;
}
