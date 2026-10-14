/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_020cdbf8(void);
void func_020d93c4(void);

extern s32 data_02156580;
extern s32 (*data_02156584)();

void func_020d945c(s32 arg0, s32 arg1) {
    s32 var_r0;

    if ((arg1 & 0x3F) == 0x11) {
        if (data_02156580 != 0) {
            return;
        }
        var_r0        = 1;
        data_02156580 = 1;
        if (data_02156584 != NULL) {
            var_r0 = data_02156584();
        }
        if (var_r0 == 0) {
            return;
        }
        func_020d93c4();
        return;
    }
    func_020cdbf8();
}
