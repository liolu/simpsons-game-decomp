/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02078af4 from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSDK/src/os/os_thread.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned int u32;
typedef unsigned short u16;
typedef int s32;
typedef s32 BOOL;
extern u32 func_020cd940(void);
extern u32 func_020cd954(u32 irq_flag);
typedef struct OSContext {
    u32 cpsr;
    u32 r[13];
    u32 sp;
    u32 lr;
    u32 pc;
    char unk_40[0x20];
} OSContext;
typedef struct OSThread OSThread;
typedef struct OSMutex OSMutex;
typedef void (*OSThreadSwitchCallback)(OSThread *oldThread, OSThread *newThread);
typedef void (*OSThreadDestructor)(void *);
typedef struct OSThreadLinkedList {
    OSThread *prev;
    OSThread *next;
} OSThreadLinkedList;
typedef struct OSMutexQueue {
    OSMutex *head;
    OSMutex *tail;
} OSMutexQueue;
typedef struct OSMutexLinkedList {
    OSMutex *next;
    OSMutex *prev;
} OSMutexLinkedList;
typedef struct OSThreadQueue {
    OSThread *head;
    OSThread *tail;
} OSThreadQueue;
typedef struct OSThreadInfo {
    u16 isSchedulerWaiting;
    u16 irqDepth;
    OSThread *current;
    OSThread *list;
    OSThreadSwitchCallback callback;
} OSThreadInfo;
typedef struct OSThread {
    OSContext context;
    s32 state;
    OSThread *next;
    u32 id;
    u32 priority;
    void *profiler;
    OSThreadQueue *queue;
    OSThreadLinkedList list;
    OSMutex *mutex;
    OSMutexQueue mutexQueue;
    u32 stackTop;
    u32 stackBottom;
    u32 stackOffset;
    OSThreadQueue joinQueue;
    void *unk_A4[3];
    void *unk_B0;
    OSThreadDestructor destructor;
    void *userParam;
    s32 error;
} OSThread;
extern OSThreadInfo data_02153c08;
typedef struct OSMutex {
    OSThreadQueue queue;
    OSThread *thread;
    s32 count;
    OSMutexLinkedList list;
} OSMutex;
extern void func_020cc614(void);
extern OSThreadInfo data_02153c08;
extern OSThread data_02153c18;
void func_020cc748(OSThread *thread);
void func_020cc614(void);
BOOL func_020cc068(OSThread *thread, u32 prio) {
    OSThread *t   = data_02153c08.list;
    OSThread *pre = 0;
    u32 prev      = func_020cd940();

    while (t != 0 && t != thread) {
        pre = t;
        t   = t->next;
    }

    if (t == 0 || t == &data_02153c18) {
        func_020cd954(prev);
        return 0;
    }

    if (t->priority != prio) {
        if (pre == 0) {
            data_02153c08.list = thread->next;
        } else {
            pre->next = thread->next;
        }
        thread->priority = prio;
        func_020cc748(thread);
        func_020cc614();
    }

    func_020cd954(prev);
    return 1;
}
