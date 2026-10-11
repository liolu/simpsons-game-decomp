#include "m2c.h"

M2C_UNK func_0200f744(void *);                      /* extern */
M2C_UNK func_020630a4(void *);                      /* extern */
M2C_UNK func_0206c0e8();                            /* extern */
extern M2C_UNK data_0211f3f0;
extern M2C_UNK data_0211f404;
extern M2C_UNK data_0211f4c4;
extern M2C_UNK data_0211f4d8;

void *func_0206b5b4(void *arg0) {
    void **var_r1;
    void *temp_r0;
    void *var_r2;

    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_0211f3f0;
    M2C_FIELD(arg0, M2C_UNK **, 0x10) = &data_0211f404;
    M2C_FIELD(arg0, M2C_UNK **, 0x1C) = &data_0211f4c4;
    M2C_FIELD(arg0, M2C_UNK **, 0x28) = &data_0211f4d8;
    func_0206c0e8(arg0);
    var_r1 = M2C_FIELD(arg0, void ***, 0x33C);
    if (var_r1 != NULL) {
        var_r2 = *var_r1;
        temp_r0 = arg0 + 0x33C;
        if (var_r2 != temp_r0) {
            do {
                var_r1 = var_r2 + 4;
                var_r2 = M2C_FIELD(var_r2, void **, 4);
            } while (var_r2 != temp_r0);
        }
        *var_r1 = M2C_FIELD(arg0, void **, 0x340);
    }
    func_020630a4(arg0);
    func_0200f744(arg0);
    return arg0;
}
