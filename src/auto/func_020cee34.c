/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* Sound_FlushCommand from https://github.com/RonyxDumb/mkds src/arm9/020211e4_Sound_FlushCommand.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned long u32;
typedef signed long s32;
typedef int BOOL;
struct SNDCommand {
    struct SNDCommand *llNext;
    s32 id;
    u32 arg[4];
};
extern const struct SNDCommand *func_020cf0d8(u32 flags);
extern BOOL func_020cee34(u32 flags);
typedef enum {
    OS_INTRMODE_DISABLE_IRQ = 0x80,
    OS_INTRMODE_DISABLE_FIQ = 0x40,
    OS_INTRMODE_ENABLE      = 0
} OSIntrMode;
extern OSIntrMode func_020cd940(void);
extern OSIntrMode func_020cd954(OSIntrMode state);
extern void func_020cd9b0(u32 cycles);
extern void func_020cced4(register const void *startAddr, register u32 nBytes);
extern s32 func_020cfadc(s32 fifotag, u32 data, BOOL err);
extern struct SNDCommand data_02154260[256];
extern struct SNDCommand *data_02153fb8[8 + 1];
extern struct SNDCommand *data_02153f9c;
extern struct SNDCommand *data_02153fa0;
extern s32 data_02153fac;
extern s32 data_02153fb0;
extern u32 data_02153fb4;
extern void func_020ceba0(void);
const struct SNDCommand *func_020cf0d8(u32 flags);
BOOL func_020cee34(u32 flags) {
    OSIntrMode oldirq = func_020cd940();

    if (data_02153f9c == ((void *) 0)) {
        (void) func_020cd954(oldirq);
        return 1;
    }

    if (data_02153fb0 >= 8) {
        if ((flags & 0x1) == 0) {
            (void) func_020cd954(oldirq);
            return 0;
        }

        do {
            (void) func_020cf0d8(0x1);
        } while (data_02153fb0 >= 8);
    }

    func_020cced4(data_02154260, sizeof(data_02154260));

    s32 result = func_020cfadc(7, (u32) data_02153f9c, 0);
    if (result < 0) {
        if ((flags & 0x1) == 0) {
            (void) func_020cd954(oldirq);
            return 0;
        }

        result = func_020cfadc(7, (u32) data_02153f9c, 0);
        while (result < 0) {
            (void) func_020cd954(oldirq);
            func_020cd9b0(100);
            oldirq = func_020cd940();
            result = func_020cfadc(7, (u32) data_02153f9c, 0);
        }
    }

    if ((flags & 0x2) != 0) {
        func_020ceba0();
    }

    data_02153fb8[data_02153fac] = data_02153f9c;

    if (++data_02153fac > 8) {
        data_02153fac = 0;
    }

    data_02153f9c = ((void *) 0);
    data_02153fa0 = ((void *) 0);
    data_02153fb0++;
    data_02153fb4++;

    (void) func_020cd954(oldirq);
    return 1;
}
void func_020ceba0(void);
