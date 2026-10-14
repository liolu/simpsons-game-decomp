#include "engine.h"
#include "m2c.h"

extern u16 data_02156588;

s32 func_020d9ad4(void) {
    if (data_02156588 != 0) {
        return 0;
    }
    return 3;
}
