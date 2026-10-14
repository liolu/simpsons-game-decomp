#include "engine.h"
#include "m2c.h"

M2C_UNK func_0201ec5c(void);
void func_0201ef18(M2C_UNK, M2C_UNK);

void func_020b40dc(s32 arg0) {
    if (M2C_FIELD(arg0, u8 *, 4) == 0) {
        return;
    }
    func_0201ef18(func_0201ec5c(), (s32) M2C_FIELD(arg0, u8 *, 5));
    M2C_FIELD(arg0, u8 *, 4) = 0U;
}
