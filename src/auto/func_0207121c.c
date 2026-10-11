#include "m2c.h"
#include "engine.h"

void func_02019174(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);

extern M2C_UNK data_0214cfd8;
extern M2C_UNK data_0214cfdc;

void func_0207121c(void) {
    s32 sp8;
    M2C_UNK *sp4;
    M2C_UNK sp0;

    sp8 = M2C_FIELD(&data_0214cfd8, s32 *, 8);
    sp4 = &data_0214cfdc;
    func_02019174((s32) &sp0, (s32) &data_0214cfdc, (s32) &sp4, (s32) &sp8);
    M2C_FIELD(&data_0214cfd8, s8 *, 0) = 0;
}
