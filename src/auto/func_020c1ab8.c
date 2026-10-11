#include "m2c.h"

M2C_UNK func_020c159c();                            /* extern */
M2C_UNK func_020c15a8();                            /* extern */
M2C_UNK func_020c15cc(M2C_UNK, M2C_UNK *);          /* extern */
extern M2C_UNK data_02131480;

void func_020c1ab8(void *arg0) {
    if (arg0 == NULL) {
        func_020c15cc(0, &data_02131480);
        return;
    }
    func_020c159c();
    M2C_FIELD(arg0, s8 *, 1) = 0;
    func_020c15a8();
}
