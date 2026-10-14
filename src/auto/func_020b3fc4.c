#include "m2c.h"

M2C_UNK func_0200f924(void *);                      /* extern */
M2C_UNK func_02010084(void *, s32);                 /* extern */
extern M2C_UNK data_0210b394;
extern M2C_UNK data_0210b4c0;
extern M2C_UNK data_0210caac;
extern s32 data_0214d4a8;

void *func_020b3fc4(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_0210caac;
    M2C_FIELD(arg0, s8 *, 4)       = 0;
    M2C_FIELD(arg0, s8 *, 5)       = 0;
    M2C_FIELD(arg0, M2C_UNK **, 8) = &data_0210b4c0;
    func_0200f924(arg0 + 0xC);
    M2C_FIELD(arg0, M2C_UNK **, 0xC) = &data_0210b394;
    M2C_FIELD(arg0, s32 *, 0x40)     = 0;
    M2C_FIELD(arg0, s32 *, 0x44)     = 0;
    func_02010084(arg0 + 8, data_0214d4a8);
    return arg0;
}
