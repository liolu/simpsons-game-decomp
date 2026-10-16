/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0207bc58 from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSDK/src/spi/pm.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned int u32;
typedef int s32;
typedef s32 BOOL;
extern void func_020cd9b0(u32 count);
typedef void (*UnkPmCallback)(u32 result, void *arg);
extern u32 func_020d3e0c(u32 data, UnkPmCallback callback, void *arg);
extern u32 func_020d3be8(u32 target, u32 on);
extern u32 func_020d3a84(BOOL *top, BOOL *bottom);
extern BOOL func_020d3704(u32 sw);
extern u32 func_020d36e8(void);
u32 func_020d3e0c(u32 data, UnkPmCallback callback, void *arg);
u32 func_020d3be8(u32 target, u32 on);
u32 func_020d3b38(UnkPmCallback callback, void *arg) {
    BOOL top;
    BOOL bottom;

    func_020cd9b0(0x996a00);
    if (func_020d36e8() != 1) {
        func_020d3a84(&top, &bottom);
        if (top) {
            func_020d3be8(0, 0);
        }
        if (bottom) {
            func_020d3be8(1, 0);
        }
        while (!func_020d3704(1)) {
            func_020cd9b0(0x996a00);
        }
    }
    return func_020d3e0c(14, callback, arg);
}
u32 func_020d3a84(BOOL *top, BOOL *bottom);
BOOL func_020d3704(u32 sw);
u32 func_020d36e8(void);
