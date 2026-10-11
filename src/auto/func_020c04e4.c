#include "m2c.h"
#include "engine.h"

void func_020bee60(void);
void func_020cc168(M2C_UNK);
void func_020cc21c(M2C_UNK);

extern M2C_UNK data_02152b9c;

void func_020c04e4(void) {
    if (M2C_FIELD(&data_02152b9c, s32 *, 0x10) == 1) {
        do {
            func_020cc168(M2C_FIELD(&data_02152b9c, s32 *, 0x268));
            func_020bee60();
            M2C_FIELD(&data_02152b9c, s32 *, 0x270) = (s32) (M2C_FIELD(&data_02152b9c, s32 *, 0x270) + 1);
            func_020cc21c(0);
        } while (M2C_FIELD(&data_02152b9c, s32 *, 0x10) == 1);
    }
    M2C_FIELD(&data_02152b9c, s32 *, 0x14) = 1;
}
