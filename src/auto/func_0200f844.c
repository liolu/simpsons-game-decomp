#include "m2c.h"

M2C_UNK func_0200f744(void *);                      /* extern */
M2C_UNK func_0200fbcc(void *);                      /* extern */
M2C_UNK func_0200ff2c(void *);                      /* extern */
M2C_UNK func_0201041c(s32, void *);                 /* extern */
M2C_UNK func_0201e47c(void *);                      /* extern */
extern M2C_UNK data_0210b338;
extern M2C_UNK data_0210b348;
extern s32 data_02144e24;

void *func_0200f844(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_0210b348;
    func_0201041c(data_02144e24, arg0 + 0x10);
    M2C_FIELD(arg0, M2C_UNK **, 0x10) = &data_0210b338;
    func_0200ff2c(arg0 + 0x10);
    func_0200fbcc(arg0 + 0x14);
    func_0201e47c(arg0 + 4);
    func_0200f744(arg0);
    return arg0;
}
