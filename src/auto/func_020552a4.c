#include "m2c.h"

M2C_UNK func_02047210(void *);                      /* extern */
M2C_UNK func_020f39ac(void *, M2C_UNK, M2C_UNK, M2C_UNK *); /* extern */
extern M2C_UNK func_0202a764;
extern M2C_UNK func_02054e7c;
extern M2C_UNK func_02054eb4;
extern M2C_UNK func_02054f10;

void *func_020552a4(void *arg0) {
    void **var_r1;
    void *temp_r0;
    void *var_r2;

    var_r1 = M2C_FIELD(arg0, void ***, 0xA0);
    if (var_r1 != NULL) {
        var_r2  = *var_r1;
        temp_r0 = arg0 + 0xA0;
        if (var_r2 != temp_r0) {
            do {
                var_r1 = var_r2 + 4;
                var_r2 = M2C_FIELD(var_r2, void **, 4);
            } while (var_r2 != temp_r0);
        }
        *var_r1 = M2C_FIELD(arg0, void **, 0xA4);
    }
    func_02047210(arg0 + 0x68);
    func_020f39ac(arg0 + 0x60, 2, 4, &func_02054f10);
    func_020f39ac(arg0 + 0x50, 2, 8, &func_02054eb4);
    func_020f39ac(arg0 + 0x10, 2, 0x20, &func_0202a764);
    func_020f39ac(arg0, 4, 4, &func_02054e7c);
    return arg0;
}
