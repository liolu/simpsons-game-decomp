#include "m2c.h"

M2C_UNK func_0201d84c(void *);                      /* extern */
M2C_UNK func_0201dd48();                            /* extern */
extern M2C_UNK data_02119d24;
extern M2C_UNK data_02119d38;
extern M2C_UNK data_0211c93c;
extern M2C_UNK data_0211c9b0;
extern M2C_UNK data_0211c9c4;
extern M2C_UNK data_021206c4;
extern M2C_UNK data_021206d8;
extern s32 data_0214cff0;

void *func_020723d4(void *arg0) {
    func_0201dd48();
    M2C_FIELD(arg0, M2C_UNK **, 0x10) = &data_0211c93c;
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_0211c9b0;
    M2C_FIELD(arg0, M2C_UNK **, 0x10) = &data_0211c9c4;
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_02119d24;
    M2C_FIELD(arg0, M2C_UNK **, 0x10) = &data_02119d38;
    M2C_FIELD(arg0, s32 *, 0x14) = 0;
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
    func_0201d84c(arg0 + 0x1C);
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_021206c4;
    M2C_FIELD(arg0, M2C_UNK **, 0x10) = &data_021206d8;
    M2C_FIELD(arg0, s32 *, 0x40) = 0;
    M2C_FIELD(arg0, s32 *, 0x44) = 0;
    M2C_FIELD(arg0, s8 *, 0x48) = 0;
    M2C_FIELD(arg0, s8 *, 0x49) = 0;
    M2C_FIELD(arg0, s32 *, 0x4C) = 0;
    M2C_FIELD(arg0, s32 *, 0x50) = 0;
    M2C_FIELD(arg0, s32 *, 0x54) = 0x64;
    data_0214cff0 += 1;
    return arg0;
}
