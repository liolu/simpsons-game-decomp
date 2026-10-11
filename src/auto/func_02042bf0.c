#include "m2c.h"

M2C_UNK func_02045d40(M2C_UNK *, void *, void **, s32 *); /* extern */
M2C_UNK func_020f39ac(void *, M2C_UNK, M2C_UNK, M2C_UNK *); /* extern */
extern M2C_UNK func_020420c8;
extern M2C_UNK func_020421b0;

void *func_02042bf0(void *arg0) {
    s32 sp14;
    void *sp10;
    M2C_UNK spC;
    M2C_UNK sp8;
    void *sp4;
    s32 sp0;
    void **var_r1;
    void **var_r1_2;
    void *temp_r0;
    void *temp_r0_2;
    void *temp_r1;
    void *temp_r1_2;
    void *var_r2;
    void *var_r2_2;

    temp_r1 = arg0 + 0x70;
    sp14 = M2C_FIELD(arg0, s32 *, 0x74);
    sp10 = temp_r1;
    func_02045d40(&spC, temp_r1, &sp10, &sp14);
    var_r1 = M2C_FIELD(arg0, void ***, 0x25D8);
    if (var_r1 != NULL) {
        var_r2 = *var_r1;
        temp_r0 = arg0 + 0x25D8;
        if (var_r2 != temp_r0) {
            do {
                var_r1 = var_r2 + 4;
                var_r2 = M2C_FIELD(var_r2, void **, 4);
            } while (var_r2 != temp_r0);
        }
        *var_r1 = M2C_FIELD(arg0, void **, 0x25DC);
    }
    func_020f39ac(arg0 + 0x2378, 4, 0x88, &func_020421b0);
    func_020f39ac(arg0 + 0x78, 0x46, 0x80, &func_020420c8);
    temp_r1_2 = arg0 + 0x70;
    sp0 = M2C_FIELD(arg0, s32 *, 0x74);
    sp4 = temp_r1_2;
    func_02045d40(&sp8, temp_r1_2, &sp4, &sp0);
    var_r1_2 = M2C_FIELD(arg0, void ***, 0x68);
    if (var_r1_2 != NULL) {
        var_r2_2 = *var_r1_2;
        temp_r0_2 = arg0 + 0x68;
        if (var_r2_2 != temp_r0_2) {
            do {
                var_r1_2 = var_r2_2 + 4;
                var_r2_2 = M2C_FIELD(var_r2_2, void **, 4);
            } while (var_r2_2 != temp_r0_2);
        }
        *var_r1_2 = M2C_FIELD(arg0, void **, 0x6C);
    }
    return arg0;
}
