/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* ADXB_AhxTermSupply from https://github.com/Yotona/twewy libs/cri/src/adx_bahx.c (license: CC0-1.0), reused by
 * tools/donor_match.py */
typedef struct {
    int nch;
    int ibuf;
    int nblk;
    int obuf_l;
    int obuf_r;
} ADXPDPRM;
typedef struct {
    int used;
    int xno;
    int mode;
    int stat;
    int ndecblk;
    ADXPDPRM xprm;
    short dly[2][2];
    short k[2];

    short key;
    short key_mul;
    short key_add;
    short pad3A;
} ADXPD_OBJ;
typedef ADXPD_OBJ *ADXPD;
typedef struct {
    char pad0[0x10];
} ADX_UNK;
typedef struct {
    int ibuf;
    int niblk;
    int nch;
    int blksize;
    int blknsmpl;
    void *pcmbuf;
    int pcmbsize;
    int pcmbdist;
    int wpos;
    int nroom;
    int lp_nsmpl;
} ADXB_DECPARA;
typedef struct ADXB_OBJ {
    short used;
    short hdcdflag;
    int stat;
    ADXPD adxpd;
    char code;
    char bps;
    char nch;
    char blklen;
    int blknsmpl;
    int sfreq;
    int total_nsmpl;
    short cof;
    char pad1E[2];
    int lp_ins_nsmpl;
    short nloop;
    short lp_type;
    int lp_spos;
    int lp_sofst;
    int lp_epos;
    int lp_eofst;
    int maxnch;
    void *pcmbuf;
    int pcmbsize;
    int pcmbdist;
    ADXB_DECPARA dp;
    int ndecsmpl;
    void *(*getwrfunc)(void *, int *, int *, int *);
    void *getwrobj;
    void (*addwrfunc)(void *, int, int);
    int addwrobj;
    int total_ndecsmpl;
    int curwpos;
    int total_decsmpl;
    int total_decdtlen;
    short format;
    short unk9A;
    short unk9C;
    short unk9E;
    short unkA0;
    short unkA2;
    short unkA4;
    short unkA6;
    short unkA8;
    short unkAA;
    int unkAC;
    int unkB0;
    int unkB4;
    int unkB8;
    int unkBC;
    int ainf_len;
    ADX_UNK unkC4;
    short def_out_vol;
    short def_pan[2];
    char padDA[2];
    int unkDC;
    int unkE0;
    void (*unkE4)(void *obj, int nbyte, int pcm_nbyte);
    void *unkE8;
} ADXB_OBJ;
typedef ADXB_OBJ *ADXB;
extern void (*data_0214d4c8)(int);
void func_020b739c(ADXB adxb) {
    if (adxb->unkB4 != 0) {
        data_0214d4c8(adxb->unkB4);
    }
}
