#include "m2c.h"

M2C_UNK func_0200f744(void *);                      /* extern */
M2C_UNK func_0201e47c(void *);                      /* extern */
M2C_UNK func_0202ec68(s32);                         /* extern */

void *func_0206f494(void *arg0) {
    void **var_r1;
    void *temp_r0;
    void *var_r2;

    func_0202ec68(arg0 + 0x28);
    var_r1 = M2C_FIELD(arg0, void ***, 0x1C);
    if (var_r1 != NULL) {
        var_r2 = *var_r1;
        temp_r0 = arg0 + 0x1C;
        if (var_r2 != temp_r0) {
            do {
                var_r1 = var_r2 + 4;
                var_r2 = M2C_FIELD(var_r2, void **, 4);
            } while (var_r2 != temp_r0);
        }
        *var_r1 = M2C_FIELD(arg0, void **, 0x20);
    }
    func_0201e47c(arg0 + 4);
    func_0200f744(arg0);
    return arg0;
}
