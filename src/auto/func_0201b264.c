#include "engine.h"
#include "m2c.h"

void func_0201b1a0(M2C_UNK);
void func_0201b2c8(M2C_UNK);
void func_0201b34c(M2C_UNK, M2C_UNK);

extern s32 data_02148db8;
extern M2C_UNK data_02149448;

void func_0201b264(s32 arg0) {
    if (((s32) (M2C_FIELD(arg0, s32 *, 0x110) << 0x1F) >> 0x1F) == 0) {
        return;
    }
    func_0201b2c8(arg0);
    M2C_FIELD(arg0, M2C_UNK(**)(s32), 0x164)(arg0);
    func_0201b34c((s32) &data_02149448, arg0);
    if (data_02148db8 != 0) {
        func_0201b34c(data_02148db8 + 0x4E0, arg0);
    }
    func_0201b1a0(arg0);
}
