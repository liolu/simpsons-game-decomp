#include "m2c.h"

M2C_UNK func_0200f750(s32);                         /* extern */
M2C_UNK func_0200fbcc(void *);                      /* extern */
M2C_UNK func_02010014(void *);                      /* extern */
M2C_UNK func_02010900(s32, void *);                 /* extern */
extern M2C_UNK data_0210b4c0;
extern M2C_UNK data_0210caac;
extern M2C_UNK data_0210cabc;
extern s32 data_0214d4a8;

void *func_0201effc(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_0210cabc;
    func_0200f750(M2C_FIELD(arg0, s32 *, 0xA18));
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_0210caac;
    func_02010900(data_0214d4a8, arg0 + 8);
    M2C_FIELD(arg0, M2C_UNK **, 8) = &data_0210b4c0;
    func_02010014(arg0 + 8);
    func_0200fbcc(arg0 + 0xC);
    return arg0;
}
