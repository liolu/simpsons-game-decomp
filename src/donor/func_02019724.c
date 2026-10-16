/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_020af21c from projets/dragon-ball-origins/src/donor/func_020af21c.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef unsigned int u32;
typedef unsigned short u16;
typedef unsigned char u8;
typedef int s32;
typedef short s16;
typedef s32 BOOL;
typedef struct {
    void *prevObject;
    void *nextObject;
} UnkFndLink;
typedef struct {
    void *headObject;
    void *tailObject;
    u16 numObjects;
    u16 offset;
} UnkFndList;
typedef struct {
    u8 unk_00[0x10];
} UnkSndFader;
typedef struct {
    u8 unk_00[0x20];
    u8 volume;
} UnkSndPlayerGroup;
typedef struct UnkSndSeqPlayer {
    struct UnkSndHandle *handle;
    UnkSndPlayerGroup *player;
    u8 unk_08[0x14 - 0x08];
    UnkFndLink prioLink;
    UnkSndFader fader;
    u8 status;
    u8 startedFlag;
    u8 unk_2e;
    u8 updateFlag;
    u32 commandTag;
    u16 seqType;
    u16 unk_36;
    u16 seqNo;
    u16 seqArcIndex;
    u8 playerNo;
    u8 unk_3d;
    s16 extVolume;
    u8 initVolume;
    u8 volume;
    u8 unk_42[2];
} UnkSndSeqPlayer;
typedef struct UnkSndHandle {
    UnkSndSeqPlayer *volatile player;
} UnkSndHandle;
extern UnkFndList data_021484a0;
extern const s16 data_0210a10c[];
extern void *func_020c80c8(UnkFndList *list, void *object);
extern u32 func_020cf4b8(void);
extern BOOL func_020ced10(u32 tag);
extern void func_02019be0(UnkSndSeqPlayer *player);
extern void func_020c98dc(UnkSndFader *fader);
extern int func_020c98f4(UnkSndFader *fader);
extern BOOL func_020c98c4(UnkSndFader *fader);
extern void func_020ce9bc(u32 playerNo, int volume);
extern void func_02019b40(UnkSndSeqPlayer *player);
extern void func_020cea00(u32 playerNo);
void func_02019724(void) {
    u32 status              = func_020cf4b8();
    UnkSndSeqPlayer *player = func_020c80c8(&data_021484a0, 0);
    UnkSndSeqPlayer *next;
    int volume;
    int seqVol, initVol, groupVol;

    while (player != 0) {
        next = func_020c80c8(&data_021484a0, player);

        if (!player->startedFlag) {
            if (func_020ced10(player->commandTag)) {
                player->startedFlag = 1;
            }
        }

        if (player->startedFlag && !(status & (1 << player->playerNo))) {
            func_02019be0(player);
        } else {
            func_020c98dc(&player->fader);
            seqVol   = data_0210a10c[player->volume];
            initVol  = data_0210a10c[player->initVolume];
            groupVol = data_0210a10c[player->player->volume];
            volume   = data_0210a10c[func_020c98f4(&player->fader) >> 8];
            volume += initVol + seqVol + groupVol;
            if (volume < -0x8000) {
                volume = -0x8000;
            } else if (volume > 0x7fff) {
                volume = 0x7fff;
            }
            if (volume != player->extVolume) {
                func_020ce9bc(player->playerNo, volume);
                player->extVolume = volume;
            }
            if (player->status == 2 && func_020c98c4(&player->fader)) {
                func_02019b40(player);
            }
            if (player->updateFlag) {
                func_020cea00(player->playerNo);
                player->updateFlag = 0;
            }
        }
        player = next;
    }
}
