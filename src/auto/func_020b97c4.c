#include "m2c.h"
#include "engine.h"

void func_020b8234(void);
void func_020b8240(void);
void func_020bb8dc(void);
void func_020bb94c(void);
void func_020bb96c(void);
void func_020c66ec(void);

extern M2C_UNK data_0214d9d8;

void func_020b97c4(void) {
    func_020b8234();
    if (M2C_FIELD(&data_0214d9d8, s32 *, 0x10) != 0) {
        func_020b8240();
        return;
    }
    M2C_FIELD(&data_0214d9d8, s32 *, 0x10) = 1;
    func_020b8240();
    if (M2C_FIELD(&data_0214d9d8, M2C_UNK (**)(s32), 8) != NULL) {
        M2C_FIELD(&data_0214d9d8, M2C_UNK (**)(s32), 8)(M2C_FIELD(&data_0214d9d8, s32 *, 4));
    }
    M2C_FIELD(&data_0214d9d8, s32 *, 0x10) = 3;
    func_020bb94c();
    M2C_FIELD(&data_0214d9d8, s32 *, 0x10) = 4;
    func_020bb8dc();
    M2C_FIELD(&data_0214d9d8, s32 *, 0x10) = 5;
    func_020c66ec();
    M2C_FIELD(&data_0214d9d8, s32 *, 0x10) = 6;
    func_020bb8dc();
    M2C_FIELD(&data_0214d9d8, s32 *, 0x10) = 7;
    func_020bb94c();
    M2C_FIELD(&data_0214d9d8, s32 *, 0x10) = 9;
    func_020bb96c();
    M2C_FIELD(&data_0214d9d8, s32 *, 0x10) = 0;
    if (M2C_FIELD(&data_0214d9d8, M2C_UNK (**)(s32), 0) == NULL) {
        return;
    }
    M2C_FIELD(&data_0214d9d8, M2C_UNK (**)(s32), 0)(M2C_FIELD(&data_0214d9d8, s32 *, 0x14));
}
