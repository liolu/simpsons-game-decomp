/* compiler: 1.2/sp2p3  */
#include "m2c.h"
#include "engine.h"

M2C_UNK func_020ca4e4(M2C_UNK);
void func_020cddc4(M2C_UNK);

extern s32 data_02136d90;
extern s32 data_02153b70;

s32 func_020cb3b4(void) {
    if (data_02136d90 != -1) {
        func_020cddc4(data_02136d90);
    }
    func_020ca4e4(data_02153b70);
    data_02153b70 = 0;
    return (s32) &data_02153b70;
}
