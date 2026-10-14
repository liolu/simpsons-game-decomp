#include "engine.h"
#include "m2c.h"

void func_0202ade4(M2C_UNK, M2C_UNK);
void func_0202ae6c(M2C_UNK);
M2C_UNK func_02063190(M2C_UNK);

void func_0208ffb4(s32 arg0) {
    s32 temp_r4;

    temp_r4 = func_02063190(arg0);
    func_0202ae6c(M2C_FIELD(arg0, s32 *, 0x88));
    func_0202ade4(M2C_FIELD(arg0, s32 *, 0x88), M2C_FIELD(*M2C_FIELD(temp_r4, void ***, 8), s32 *, 8));
}
