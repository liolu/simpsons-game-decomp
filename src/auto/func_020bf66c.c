#include "m2c.h"

M2C_UNK func_020bead0();                            /* extern */
M2C_UNK func_020beae0();                            /* extern */
M2C_UNK func_020befa0(M2C_UNK, M2C_UNK *);          /* extern */
extern M2C_UNK data_02130cf8;

void func_020bf66c(void *arg0) {
    if (arg0 == NULL) {
        func_020befa0(0, &data_02130cf8);
        return;
    }
    func_020bead0();
    M2C_FIELD(arg0, s8 *, 1) = 0;
    func_020beae0();
}
