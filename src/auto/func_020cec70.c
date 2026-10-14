/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

M2C_UNK func_020cec90(void);
M2C_UNK func_020cecd0(void);

s32 func_020cec70(void) {
    s32 temp_r4;

    temp_r4 = func_020cecd0();
    return (0x100 - temp_r4) - func_020cec90();
}
