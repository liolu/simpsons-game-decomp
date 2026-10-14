#include "engine.h"
#include "m2c.h"

extern void *data_02149fd4;

s32 func_02048454(void) {
    if (data_02149fd4 == NULL) {
        return 0;
    }
    return M2C_FIELD(data_02149fd4, s32 *, 0x18);
}
