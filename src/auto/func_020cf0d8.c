/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */

typedef unsigned int u32;
typedef int s32;
extern u32 func_020cd940(void);
extern u32 func_020cd954(u32 state);
extern void func_020cd9b0(u32 count);
typedef struct UnkSndCommand {
    struct UnkSndCommand *next;
    s32 id;
    u32 arg[4];
} UnkSndCommand;
extern UnkSndCommand *func_020cf0d8(u32 flags);
extern u32 func_020cf484(void);
extern u32 data_02153f98;
extern UnkSndCommand *data_02153fa4;
extern UnkSndCommand *data_02153f94;
extern s32 data_02153fa8;
extern s32 data_02153fb0;
extern UnkSndCommand *data_02153fb8[9];

/* func_0207a818 from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSDK/src/snd/snd_command.c (license: none), reused
 * by tools/donor_match.py */
UnkSndCommand *func_020cf0d8(u32 flags) {
    u32 enabled = func_020cd940();
    UnkSndCommand *head;
    UnkSndCommand *tail;

    if (flags & 1) {
        while (data_02153f98 == func_020cf484()) {
            func_020cd954(enabled);
            func_020cd9b0(100);
            enabled = func_020cd940();
        }
    } else if (data_02153f98 == func_020cf484()) {
        func_020cd954(enabled);
        return 0;
    }

    head = data_02153fb8[data_02153fa8];
    data_02153fa8++;
    if (data_02153fa8 > 8) {
        data_02153fa8 = 0;
    }

    tail = head;
    while (tail->next != 0) {
        tail = tail->next;
    }

    if (data_02153fa4 != 0) {
        data_02153fa4->next = head;
    } else {
        data_02153f94 = head;
    }
    data_02153fa4 = tail;
    data_02153fb0--;
    data_02153f98++;

    func_020cd954(enabled);
    return head;
}
