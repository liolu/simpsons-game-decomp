#include "m2c.h"
#include "engine.h"

void func_020c0390(void);

extern M2C_UNK data_02153908;

void func_020c68f8(void) {
    if ((M2C_FIELD(&data_02153908, u8 *, 0) != 0) && (M2C_FIELD(&data_02153908, s8 *, 4) != 0)) {
        func_020c0390();
    }
}
