#include "m2c.h"

M2C_UNK func_020c15cc(M2C_UNK, M2C_UNK *);          /* extern */
extern M2C_UNK data_021314b0;

s32 func_020c1b14(void *arg0) {
    if (arg0 != NULL) {
        return M2C_FIELD(arg0, s32 *, 4);
    }
    func_020c15cc(0, &data_021314b0);
    return 0;
}
