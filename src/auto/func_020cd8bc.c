/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */

typedef unsigned short int u16;
typedef unsigned long u32;
typedef signed short int s16;
typedef signed long s32;
typedef int BOOL;
typedef void (*OSAlarmHandler)(void *);
typedef struct OSiVAlarm OSVAlarm;
struct OSiVAlarm {
    OSAlarmHandler handler;
    void *arg;
    u32 tag;
    u32 frame;
    s16 fire;
    s16 delay;
    OSVAlarm *prev;
    OSVAlarm *next;
    BOOL period;
    BOOL finish;
    BOOL canceled;
};
extern void func_020cd8bc(void);
typedef u32 OSIrqMask;
extern OSIrqMask func_020cb9c4(OSIrqMask mask);
extern struct OSiVAlarmQueue {
    OSVAlarm *head;
    OSVAlarm *tail;
} data_02153f44;
extern u16 data_02153f38;
extern s32 data_02153f40;
extern s32 data_02153f3c;

/* Os_InitializeVAlarm from https://github.com/RonyxDumb/mkds src/arm9/0200fc1c_Os_InitializeVAlarm.c (license: none), reused
 * by tools/donor_match.py */
void func_020cd8bc(void) {
    if (!data_02153f38) {
        data_02153f38 = 1;

        data_02153f44.head = ((void *) 0);
        data_02153f44.tail = ((void *) 0);

        (void) func_020cb9c4((1UL << 2));

        data_02153f40 = 0;
        data_02153f3c = 0;
    }
}
