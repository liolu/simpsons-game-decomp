#include "m2c.h"
#include "engine.h"

void func_020bead0(void);
void func_020beae0(void);

extern M2C_UNK data_02151cfc;

void func_020bed5c(s32 arg0, s32 arg1) {
    func_020bead0();
    M2C_FIELD(&data_02151cfc, s32 *, 0) = arg0;
    M2C_FIELD(&data_02151cfc, s32 *, 4) = arg1;
    func_020beae0();
}
