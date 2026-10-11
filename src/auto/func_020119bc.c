#include "m2c.h"
#include "engine.h"

void func_02011a70(M2C_UNK);

s32 func_020119bc(s32 arg0) {
    void *temp_r2;

    temp_r2 = M2C_FIELD(arg0, void **, 0x18);
    if (temp_r2 != NULL) {
        M2C_FIELD(arg0, void **, 0x18) = (void *) M2C_FIELD(temp_r2, void **, 8);
        M2C_FIELD(temp_r2, void **, 8) = NULL;
        M2C_FIELD(temp_r2, s32 *, 0xC) = 0;
        M2C_FIELD(arg0, u16 *, 0x1E) = (u16) (M2C_FIELD(arg0, u16 *, 0x1E) - 1);
        return (s32) temp_r2;
    }
    func_02011a70(arg0);
    return func_020119bc(arg0);
}
