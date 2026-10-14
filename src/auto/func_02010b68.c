#include "engine.h"
#include "m2c.h"

void func_02010b68(s32 arg0) {
    void *temp_r2;
    void *temp_r2_2;

    M2C_FIELD(M2C_FIELD(arg0, void **, 4), void **, 0xC) = (void *) M2C_FIELD(arg0, void **, 8);
    M2C_FIELD(M2C_FIELD(arg0, void **, 8), void **, 8)   = (void *) M2C_FIELD(arg0, void **, 4);
    temp_r2                                              = M2C_FIELD(arg0, void **, 4);
    M2C_FIELD(arg0, void **, 8)                          = temp_r2;
    temp_r2_2                                            = M2C_FIELD(temp_r2, void **, 8);
    M2C_FIELD(arg0, void **, 4)                          = temp_r2_2;
    M2C_FIELD(temp_r2_2, s32 *, 0xC)                     = 0;
    M2C_FIELD(M2C_FIELD(arg0, void **, 8), void **, 8)   = NULL;
}
