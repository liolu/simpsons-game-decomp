#include "engine.h"
#include "m2c.h"

void func_0201d2b4(M2C_UNK, M2C_UNK, M2C_UNK);

extern M2C_UNK data_02149c20;
extern M2C_UNK data_02149ccc;

void func_0201c148(s32 arg0, s32 arg1) {
    if (M2C_FIELD(&data_02149c20, s32 *, 0xB4) != 0x1F) {
        return;
    }
    func_0201d2b4((s32) &data_02149ccc, arg0, 0);
    M2C_FIELD(&data_02149c20, s32 *, 0xB4) = arg1;
}
