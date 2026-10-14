/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_020cf9ac(void);
M2C_UNK func_020cfb90(M2C_UNK, M2C_UNK);
void func_020cfbb8(M2C_UNK, M2C_UNK);
void func_020d32f0(M2C_UNK, M2C_UNK, M2C_UNK);

extern u16 data_02155bd0;
extern M2C_UNK data_02155bd4;

void func_020d3260(void) {
    if (data_02155bd0 != 0) {
        return;
    }
    data_02155bd0 = 1;
    func_020cf9ac();
    M2C_FIELD(&data_02155bd4, s16 *, 0x32) = 0;
    M2C_FIELD(&data_02155bd4, s16 *, 0x36) = 0;
    M2C_FIELD(&data_02155bd4, s16 *, 0xC)  = 0;
    M2C_FIELD(&data_02155bd4, s32 *, 0)    = 0;
    M2C_FIELD(&data_02155bd4, s32 *, 0x10) = 0;
    M2C_FIELD(&data_02155bd4, s16 *, 0x30) = 0;
    M2C_FIELD(&data_02155bd4, s16 *, 0x34) = 0;
    do {

    } while (func_020cfb90(6, 1) == 0);
    func_020cfbb8(6, (s32) func_020d32f0);
}
