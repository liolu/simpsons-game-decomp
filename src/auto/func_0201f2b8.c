#include "m2c.h"
#include "engine.h"

M2C_UNK func_0201e52c(M2C_UNK);
M2C_UNK func_0201ea04(void);
M2C_UNK func_0201ea7c(void);
void func_0201f344(M2C_UNK);
void func_0201f384(M2C_UNK);
void func_0201f450(M2C_UNK);
M2C_UNK func_0201f5e8(M2C_UNK, M2C_UNK);
M2C_UNK func_020201a8(void);
void func_020b40dc(M2C_UNK);

extern u8 data_02149fdc;

s32 func_0201f2b8(s32 arg0) {
    data_02149fdc += 1;
    func_020b40dc(arg0);
    func_0201f344(arg0);
    if (func_0201ea7c() == 0) {
        return 0;
    }
    if ((M2C_FIELD(arg0, u8 *, 0x49) == 0) && (func_0201e52c(func_0201f5e8(func_0201ea04(), 0)) > 1)) {
        M2C_FIELD(arg0, u8 *, 0x49) = 1U;
    }
    if (M2C_FIELD(arg0, u8 *, 0x49) == 0) {
        return func_020201a8();
    }
    func_0201f384(arg0);
    func_0201f450(arg0);
    return M2C_FIELD(arg0, s32 *, 0xA24);
}
