/* compiler: 1.2/sp2p3  */
#include "m2c.h"
#include "engine.h"

M2C_UNK func_020da544(M2C_UNK);
M2C_UNK func_020dab64(M2C_UNK, M2C_UNK, M2C_UNK);
void func_020deeb4(M2C_UNK);
void func_020e0a68(void);

extern u16 data_02157150;
extern s32 data_02157154;
extern void *data_02157158;
extern void *data_0215715c;

s32 func_020df3b8(void) {
    s32 temp_r0;

    M2C_FIELD(data_02157158, s16 *, 0x528) = 0;
    M2C_FIELD(data_02157158, s16 *, 0x52A) = 0;
    M2C_FIELD(data_02157158, s16 *, 0x526) = 0;
    M2C_FIELD(data_02157158, s16 *, 0x548) = 0;
    func_020deeb4(0xA);
    if (M2C_FIELD(data_0215715c, s32 *, 0x1320) == 0) {
        do {
            temp_r0 = func_020dab64(data_02157154, M2C_FIELD(data_02157158, s32 *, 0x508), (s32) data_02157150);
        } while (temp_r0 == 4);
        if (temp_r0 != 2) {
            return 8;
        }
        func_020da544(M2C_FIELD(data_02157158, s32 *, 0x508));
        M2C_FIELD(data_02157158, s8 *, 0x50D) = 1;
        return 0;
    }
    func_020da544(M2C_FIELD(data_02157158, s32 *, 0x508));
    M2C_FIELD(data_02157158, s8 *, 0x50D) = 1;
    func_020e0a68();
    return 0;
}
