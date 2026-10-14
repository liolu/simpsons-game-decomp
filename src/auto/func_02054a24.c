#include "m2c.h"

M2C_UNK func_0200f744(s32);                         /* extern */
M2C_UNK func_0202a9b4(s32);                         /* extern */
M2C_UNK func_0202ec68(void *);                      /* extern */

void *func_02054a24(void *arg0) {
    s32 temp_r5;
    void **temp_r1_2;
    void **var_r1;
    void *temp_r1;

    temp_r5 = M2C_FIELD(arg0, s32 *, 0x18);
    if (temp_r5 != 0) {
        func_0202a9b4(temp_r5);
        func_0200f744(temp_r5);
    }
    func_0202ec68(arg0 + 0x1C);
    var_r1 = M2C_FIELD(arg0, void ***, 4);
    if (var_r1 != NULL) {
        do {
            M2C_FIELD(var_r1, void **, 0) = NULL;
            var_r1                        = M2C_FIELD(var_r1, void ***, 4);
        } while (var_r1 != NULL);
    }
    temp_r1 = M2C_FIELD(arg0, void **, 0);
    if (temp_r1 != NULL) {
        M2C_FIELD(temp_r1, void ***, 4) = (void **) M2C_FIELD(arg0, void ***, 4);
        temp_r1_2                       = M2C_FIELD(arg0, void ***, 4);
        if (temp_r1_2 != NULL) {
            *temp_r1_2 = M2C_FIELD(arg0, void **, 0);
        }
        M2C_FIELD(arg0, void **, 0) = NULL;
    }
    return arg0;
}
