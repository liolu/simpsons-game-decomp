#include "m2c.h"

M2C_UNK func_0200f744(void *);                      /* extern */
M2C_UNK func_0201e47c(void *);                      /* extern */
M2C_UNK func_02057450(void *);                      /* extern */

void *func_0207c6e8(void *arg0) {
    void **var_r1;
    void **var_r1_2;
    void *temp_r0;
    void *temp_r0_2;
    void *var_r2;
    void *var_r2_2;

    var_r1 = M2C_FIELD(arg0, void ***, 0x1D4);
    if (var_r1 != NULL) {
        var_r2 = *var_r1;
        temp_r0 = arg0 + 0x1D4;
        if (var_r2 != temp_r0) {
            do {
                var_r1 = var_r2 + 4;
                var_r2 = M2C_FIELD(var_r2, void **, 4);
            } while (var_r2 != temp_r0);
        }
        *var_r1 = M2C_FIELD(arg0, void **, 0x1D8);
    }
    func_02057450(arg0 + 0x1C);
    var_r1_2 = M2C_FIELD(arg0, void ***, 0x14);
    if (var_r1_2 != NULL) {
        var_r2_2 = *var_r1_2;
        temp_r0_2 = arg0 + 0x14;
        if (var_r2_2 != temp_r0_2) {
            do {
                var_r1_2 = var_r2_2 + 4;
                var_r2_2 = M2C_FIELD(var_r2_2, void **, 4);
            } while (var_r2_2 != temp_r0_2);
        }
        *var_r1_2 = M2C_FIELD(arg0, void **, 0x18);
    }
    func_0201e47c(arg0 + 4);
    func_0200f744(arg0);
    return arg0;
}
