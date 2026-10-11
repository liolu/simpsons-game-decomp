#include "m2c.h"

M2C_UNK func_020befa0(M2C_UNK, M2C_UNK *);          /* extern */
extern M2C_UNK data_02130d28;

s32 func_020bf6c8(void *arg0) {
    if (arg0 != NULL) {
        return M2C_FIELD(arg0, s32 *, 0x54);
    }
    func_020befa0(0, &data_02130d28);
    return 0;
}
