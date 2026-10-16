/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */

typedef unsigned short int u16;
typedef unsigned long u32;
typedef unsigned long long int u64;
typedef signed long s32;
typedef struct OSiAlarm OSAlarm;
typedef enum {
    OS_TIMER_0 = 0,
    OS_TIMER_1 = 1,
    OS_TIMER_2 = 2,
    OS_TIMER_3 = 3
} OSTimer;
extern void func_020cd724(s32 timerNum);
typedef u64 OSTick;
typedef void (*OSAlarmHandler)(void *);
struct OSiAlarm {
    OSAlarmHandler handler;
    void *arg;

    u32 tag;
    OSTick fire;
    OSAlarm *prev;
    OSAlarm *next;

    OSTick period;
    OSTick start;
};
struct OSiAlarmQueue {
    OSAlarm *head;
    OSAlarm *tail;
};
extern void func_020cd864(void);
typedef u32 OSIrqMask;
extern OSIrqMask func_020cb9c4(OSIrqMask mask);
extern u16 data_02153f2c;
extern struct OSiAlarmQueue data_02153f30;

/* Os_InitializeAlarm from https://github.com/RonyxDumb/mkds src/arm9/0200fb28_Os_InitializeAlarm.c (license: none), reused by
 * tools/donor_match.py */
void func_020cd864(void) {
    if (!data_02153f2c) {
        data_02153f2c = 1;

        func_020cd724(OS_TIMER_1);

        data_02153f30.head = ((void *) 0);
        data_02153f30.tail = ((void *) 0);

        (void) func_020cb9c4((1UL << 4));
    }
}
