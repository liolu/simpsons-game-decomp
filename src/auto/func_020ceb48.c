/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */

typedef unsigned int u32;
typedef int s32;
extern u32 func_020cd940(void);
extern u32 func_020cd954(u32 state);
typedef struct UnkSndCommand {
    struct UnkSndCommand *next;
    s32 id;
    u32 arg[4];
} UnkSndCommand;
extern UnkSndCommand *func_020ceb48(void);
extern UnkSndCommand *data_02153fa4;
extern UnkSndCommand *data_02153f94;

/* func_0207adcc from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSDK/src/snd/snd_command.c (license: none), reused
 * by tools/donor_match.py */
UnkSndCommand *func_020ceb48(void) {
    UnkSndCommand *cmd;
    u32 enabled = func_020cd940();

    cmd = data_02153f94;
    if (cmd == 0) {
        func_020cd954(enabled);
        return 0;
    }
    data_02153f94 = cmd->next;
    if (data_02153f94 == 0) {
        data_02153fa4 = 0;
    }
    func_020cd954(enabled);
    return cmd;
}
