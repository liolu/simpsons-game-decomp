#include "engine.h"
#include "m2c.h"

s32 func_020c9da4(s32 arg0) {
    s32 temp_r0;

    temp_r0             = (*(s32 *) 0x04001000 & ~7) | arg0;
    *(s32 *) 0x04001000 = temp_r0;
    return temp_r0;
}
