/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_020ed1ac from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/MSL/src/math/s_fabs.c (license: none), reused by
 * tools/donor_match.py */
extern double func_020ed1ac(double x);
double func_020ed1ac(double x)

{
    (((int *) &x)[1]) &= 0x7fffffff;
    return x;
}
