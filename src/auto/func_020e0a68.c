/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020da544(M2C_UNK *);                       /* extern */
s32 func_020dbe58(M2C_UNK *, u16, u16, u16, s32);   /* extern */
M2C_UNK func_020dec60(M2C_UNK, s32);                /* extern */
extern u16 data_02136dec;
extern u16 data_02136df0;
extern u16 data_02136df4;
extern u16 data_02136df8;
extern M2C_UNK func_020e01f0;

void func_020e0a68(void) {
    func_020dec60(0x80, func_020da544(&func_020e01f0));
    func_020dec60(0x1D, func_020dbe58(&func_020e01f0, data_02136df8, data_02136df0, data_02136dec, (s32) data_02136df4));
}
