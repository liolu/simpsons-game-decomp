/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020cbfa8();                            /* extern */
M2C_UNK func_020cbfe0();                            /* extern */
M2C_UNK func_020cc11c();                            /* extern */
M2C_UNK func_020cc19c(void *);                      /* extern */
M2C_UNK func_020cc700(void *);                      /* extern */
M2C_UNK func_020cc7e0(s32, void *);                 /* extern */
M2C_UNK func_020ccd08(void *);                      /* extern */
M2C_UNK func_020cdbf8();                            /* extern */
extern void **data_02153c00;

void func_020cc270(void) {
    s32 temp_r0;
    void *temp_r4;

    temp_r4 = *data_02153c00;
    func_020cbfe0();
    func_020ccd08(temp_r4);
    temp_r0 = M2C_FIELD(temp_r4, s32 *, 0x78);
    if (temp_r0 != 0) {
        func_020cc7e0(temp_r0, temp_r4);
    }
    func_020cc700(temp_r4);
    M2C_FIELD(temp_r4, s32 *, 0x64) = 2;
    func_020cc19c(temp_r4 + 0x9C);
    func_020cbfa8();
    func_020cc11c();
    func_020cdbf8();
}
