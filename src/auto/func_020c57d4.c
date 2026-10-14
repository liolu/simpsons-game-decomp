#include "engine.h"
#include "m2c.h"

void func_020c2c68(void);

extern s32 data_02153900;

void func_020c57d4(void) {
    if (data_02153900 == 1) {
        func_020c2c68();
    }
    data_02153900 -= 1;
}
