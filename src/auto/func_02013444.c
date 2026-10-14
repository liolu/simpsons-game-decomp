#include "engine.h"
#include "m2c.h"

M2C_UNK func_02012bc8(M2C_UNK);

s32 func_02013444(s32 arg0, s32 arg1) {
    return (s32) * (u16 *) func_02012bc8(M2C_FIELD(((arg1 * 0x18) + arg0), s32 *, 0x10));
}
