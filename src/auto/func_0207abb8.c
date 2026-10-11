#include "m2c.h"
#include "engine.h"

M2C_UNK func_0204d550(void);
void func_020a1470(M2C_UNK);
void func_020b42d0(M2C_UNK);

extern s32 data_0214d3e0;
extern s32 data_0214d4ac;

void func_0207abb8(void) {
    void *temp_r0;

    temp_r0 = (void *) func_0204d550();
    if (M2C_FIELD(temp_r0, u8 *, 0) != 0) {
        M2C_FIELD(temp_r0, s32 *, 4) = (s32) (M2C_FIELD(temp_r0, s32 *, 4) + 1);
    }
    if (data_0214d3e0 != 0) {
        func_020a1470(data_0214d3e0);
    }
    if (data_0214d4ac == 0) {
        return;
    }
    func_020b42d0(data_0214d4ac);
}
