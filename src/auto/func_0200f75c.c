#include "m2c.h"

M2C_UNK func_0200f924(void *);                      /* extern */
M2C_UNK func_0200ff9c(void *, s32);                 /* extern */
M2C_UNK func_0201dd48();                            /* extern */
extern M2C_UNK data_0210b338;
extern M2C_UNK data_0210b348;
extern M2C_UNK data_0210b394;
extern s32 data_02144e24;

void *func_0200f75c(void *arg0, s32 arg1) {
    func_0201dd48();
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_0210b348;
    M2C_FIELD(arg0, M2C_UNK **, 0x10) = &data_0210b338;
    func_0200f924(arg0 + 0x14);
    M2C_FIELD(arg0, M2C_UNK **, 0x14) = &data_0210b394;
    M2C_FIELD(arg0, s32 *, 0x48) = 0;
    M2C_FIELD(arg0, s32 *, 0x4C) = 0;
    func_0200ff9c(arg0 + 0x10, data_02144e24);
    M2C_FIELD(arg0, s32 *, 0x50) = arg1;
    return arg0;
}
