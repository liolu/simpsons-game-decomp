/* compiler: 1.2/sp2p3  */
#include "m2c.h"
#include "engine.h"

void func_020cceb8(M2C_UNK, M2C_UNK);
void func_020cea8c(void);
void func_020ceaa0(void);

void func_020cf7e4(s32 arg0) {
    void *temp_r6;
    void *var_r0;

    func_020ceaa0();
    var_r0 = M2C_FIELD(arg0, void **, 0x18);
    if (var_r0 != NULL) {
        do {
            temp_r6 = M2C_FIELD(var_r0, void **, 4);
            M2C_FIELD(var_r0, s32 *, 0) = 0;
            M2C_FIELD(var_r0, void **, 4) = NULL;
            func_020cceb8((s32) var_r0, 8);
            var_r0 = temp_r6;
        } while (temp_r6 != NULL);
    }
    func_020cea8c();
}
