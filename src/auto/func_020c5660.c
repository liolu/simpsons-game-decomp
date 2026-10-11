#include "m2c.h"
#include "engine.h"

void func_020c5690(void);

extern s32 data_021538f0;

void func_020c5660(void) {
    if (data_021538f0 == 0) {
        func_020c5690();
    }
    data_021538f0 += 1;
}
