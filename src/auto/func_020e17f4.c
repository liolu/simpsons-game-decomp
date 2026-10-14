/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_020cdbf8(void);
void func_020e17d4(void);

extern s32 data_021571a8;
extern s32 (*data_021571ac)();

void func_020e17f4(s32 arg0, s32 arg1) {
    s32 var_r0;

    if ((arg1 & 0x3F) == 0x11) {
        if (data_021571a8 != 0) {
            return;
        }
        var_r0 = 0;
        if (data_021571ac != NULL) {
            var_r0 = data_021571ac();
        }
        if (var_r0 != 0) {
            func_020e17d4();
        }
        data_021571a8 = 1;
        return;
    }
    func_020cdbf8();
}
