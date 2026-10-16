/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0214fefc from https://github.com/RonyxDumb/mkds src/arm9/0214fefc_func_0214fefc.c (license: none), reused by
 * tools/donor_match.py */
extern int func_020d4184(void);
extern void func_020d3a54(int param);
extern void func_020d3724(int a, int b, int c, int d);
extern volatile int data_02155c10;
extern int data_02155c14;
int func_020d3e80(unsigned int a, unsigned int b) {
    volatile int *p;

    if (!func_020d4184()) {
        return 1;
    }
    data_02155c10 = 0;
    func_020d3a54(0x3006000);
    p = &data_02155c10;
    while (!*p) {
    }
    *p            = 0;
    data_02155c14 = 0;
    func_020d3724(0, 2, 0, 0);
    func_020d3a54((a & 0xff) | 0x2006100);
    func_020d3a54((b & 0xffff) | 0x1010000);
    return 0;
}
