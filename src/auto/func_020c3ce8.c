#include "m2c.h"
#include "engine.h"

extern M2C_UNK (*data_0214e43c)();

void func_020c3ce8(s32 arg0) {
    if (data_0214e43c == NULL) {
        return;
    }
    data_0214e43c(arg0);
}
