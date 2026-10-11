#include "m2c.h"
#include "engine.h"

extern M2C_UNK data_0212b638;

void func_0208af8c(s32 arg0, s32 arg1) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_0212b638;
    M2C_FIELD(arg0, s32 *, 4) = (s32) *(M2C_UNK *)arg1;
}
