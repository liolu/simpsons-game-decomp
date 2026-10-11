#include "m2c.h"

M2C_UNK func_0201dd48();                            /* extern */
M2C_UNK func_0202a898(void *);                      /* extern */
M2C_UNK func_0202ad84(void *, M2C_UNK *);           /* extern */
M2C_UNK func_0202ade4(void *, s32);                 /* extern */
M2C_UNK func_0202aebc(void *);                      /* extern */
M2C_UNK func_0202afa0(void *, M2C_UNK);             /* extern */
extern M2C_UNK data_0211c93c;
extern M2C_UNK data_0211c9b0;
extern M2C_UNK data_0211c9c4;
extern M2C_UNK data_0211da04;
extern M2C_UNK data_0211da28;
extern M2C_UNK data_0211da8c;
extern M2C_UNK data_0211daa0;

void *func_020548b0(void *arg0) {
    func_0201dd48(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x10) = &data_0211c93c;
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_0211c9b0;
    M2C_FIELD(arg0, M2C_UNK **, 0x10) = &data_0211c9c4;
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_0211da8c;
    M2C_FIELD(arg0, M2C_UNK **, 0x10) = &data_0211daa0;
    func_0202a898(arg0 + 0x14);
    func_0202aebc(arg0 + 0x14);
    func_0202ad84(arg0 + 0x14, &data_0211da28);
    func_0202ade4(arg0 + 0x14, M2C_FIELD(&data_0211da04, s32 *, 0x2C));
    func_0202afa0(arg0 + 0x14, 1);
    M2C_FIELD(arg0, s32 *, 0x30) = 1;
    return arg0;
}
