/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* OS_ReceiveMessage from https://github.com/Yokimitsuro/khdays-decomp libs/nitro/os/calls/OS_ReceiveMessage.c (license:
 * CC0-1.0), reused by tools/donor_match.py */
extern int func_020cd940(void);
extern void func_020cd954(int state);
extern void func_020cc21c(void *queue);
extern void func_020cc19c(void *queue);
extern long long func_020f17a8(int a, int b);
int func_020ccac8(char *q, void **out, int flags) {
    int enabled = func_020cd940();
    while (*(int *) (q + 0x1c) == 0) {
        if ((flags & 1) == 0) {
            func_020cd954(enabled);
            return 0;
        }
        func_020cc21c(q + 8);
    }
    if (out != 0) {
        *out = (*(void ***) (q + 0x10))[*(int *) (q + 0x18)];
    }
    *(int *) (q + 0x18) = (int) (func_020f17a8(*(int *) (q + 0x18) + 1, *(int *) (q + 0x14)) >> 32);
    *(int *) (q + 0x1c) = *(int *) (q + 0x1c) - 1;
    func_020cc19c(q);
    func_020cd954(enabled);
    return 1;
}
