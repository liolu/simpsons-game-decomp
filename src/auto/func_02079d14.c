#include "m2c.h"
#include "engine.h"

void func_02012638(void);
M2C_UNK func_02012844(void);
M2C_UNK func_02079d30(void);

s32 func_02079d14(void) {
    s32 temp_r0;

    func_02012638();
    temp_r0 = func_02012844();
    if (temp_r0 != 0) {
        return temp_r0;
    }
    return func_02079d30();
}
