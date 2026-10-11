#include "m2c.h"

M2C_UNK func_02014fd4(void *);                      /* extern */
M2C_UNK func_02015038(void *);                      /* extern */
M2C_UNK func_02015070(void *);                      /* extern */
M2C_UNK func_0201509c(void *);                      /* extern */
M2C_UNK func_020d4a74();                            /* extern */
M2C_UNK func_020d5194(void *, s32, M2C_UNK *, M2C_UNK, s32, s32); /* extern */
extern M2C_UNK data_0212d51c;

void func_02014f58(void *arg0) {
    func_020d4a74();
    func_02014fd4(arg0);
    func_02015038(arg0);
    func_020d5194(arg0, M2C_FIELD(arg0, s32 *, 0x1058), &data_0212d51c, -1, 0, 0);
    func_02015070(arg0);
    func_0201509c(arg0);
    M2C_FIELD(arg0, void **, 0x1048) = (void *) (arg0 + 0x48);
    M2C_FIELD(arg0, s32 *, 0x1050) = 0x400;
    M2C_FIELD(arg0, s32 *, 0x104C) = 0;
}
