/* compiler: 1.2/sp2p3  */
#include "m2c.h"
#include "engine.h"

M2C_UNK func_020e1610(void);
M2C_UNK func_020e172c(void);

s32 func_020e1744(void) {
    if ((func_020e1610() != 0) && (func_020e172c() == 0)) {
        return 1;
    }
    return 0;
}
