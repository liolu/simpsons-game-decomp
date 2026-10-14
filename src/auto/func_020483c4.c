#include "engine.h"
#include "m2c.h"

extern s32 *data_02149fd4;

s32 func_020483c4(void) {
    if (data_02149fd4 == NULL) {
        return 0;
    }
    return *data_02149fd4;
}
