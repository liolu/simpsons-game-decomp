#include "m2c.h"

M2C_UNK func_020c82a4(void *, M2C_UNK);             /* extern */
M2C_UNK func_020cc168(void *);                      /* extern */
M2C_UNK func_020cc3b0(void *, M2C_UNK *, void *, s32, s32, s32); /* extern */
M2C_UNK func_020cce4c(void *);                      /* extern */
extern M2C_UNK func_0201bfe0;

void func_0201b2ec(void *arg0, s32 arg1) {
    func_020cc3b0(arg0, &func_0201bfe0, arg0, arg0 + 0x4C0, 0x400, arg1);
    func_020c82a4(arg0 + 0x4E0, 0);
    func_020cce4c(arg0 + 0x4C8);
    M2C_FIELD(arg0, s32 *, 0x4C4) = 0;
    M2C_FIELD(arg0, s32 *, 0x4C0) = 0;
    func_020cc168(arg0);
}
