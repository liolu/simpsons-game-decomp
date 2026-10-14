#include "m2c.h"

M2C_UNK func_0201dd48();                            /* extern */
M2C_UNK func_0205e454(void *);                      /* extern */
M2C_UNK func_020f386c(void *, M2C_UNK, M2C_UNK, M2C_UNK *, M2C_UNK *); /* extern */
extern M2C_UNK data_0211c93c;
extern M2C_UNK data_0211c9b0;
extern M2C_UNK data_0211c9c4;
extern M2C_UNK data_0211dea4;
extern M2C_UNK data_0211deb8;
extern M2C_UNK func_020596e8;
extern M2C_UNK func_02059708;

void *func_02059640(void *arg0) {
    s32 var_r5;
    void *var_r6;

    func_0201dd48();
    M2C_FIELD(arg0, M2C_UNK **, 0x10) = &data_0211c93c;
    M2C_FIELD(arg0, M2C_UNK **, 0)    = &data_0211c9b0;
    M2C_FIELD(arg0, M2C_UNK **, 0x10) = &data_0211c9c4;
    M2C_FIELD(arg0, M2C_UNK **, 0)    = &data_0211dea4;
    M2C_FIELD(arg0, M2C_UNK **, 0x10) = &data_0211deb8;
    func_020f386c(arg0 + 0x14, 2, 0x18, &func_020596e8, &func_02059708);
    M2C_FIELD(arg0, s32 *, 0x44) = 0x20;
    var_r5                       = 0;
    M2C_FIELD(arg0, s8 *, 0x48)  = 0;
    var_r6                       = arg0 + 0x14;
    do {
        func_0205e454(var_r6);
        var_r5 += 1;
        var_r6 += 0x18;
    } while (var_r5 < 2);
    return arg0;
}
