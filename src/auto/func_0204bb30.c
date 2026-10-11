#include "m2c.h"

M2C_UNK func_02050118();                            /* extern */
extern s32 data_0214cd04;

s32 func_0204bb30(void) {
    if (data_0214cd04 != 0) {
        func_02050118();
    }
    return 1;
}
