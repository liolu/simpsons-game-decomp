#include "m2c.h"

M2C_UNK func_020c15cc(M2C_UNK, M2C_UNK *);          /* extern */
extern M2C_UNK data_02131498;

s8 func_020c1aec(void *arg0) {
    if (arg0 != NULL) {
        return M2C_FIELD(arg0, s8 *, 1);
    }
    func_020c15cc(0, &data_02131498);
    return 0;
}
