/* compiler: 1.2/sp2p3  */
#include "m2c.h"
#include "engine.h"

M2C_UNK func_020d9ad4(void);

s32 func_020da1d4(void) {
    if (func_020d9ad4() != 0) {
        return 0x8000;
    }
    return (s32) *(u16 *)0x027FFCFA;
}
