/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_020eec48 from https://github.com/zeldaret/st libs/c/src/extras.c (license: CC0-1.0), reused by tools/donor_match.py */
extern double func_020ed38c(double x, int *eptr);
extern double func_020ed448(double value, int exp);
extern double func_020eec48(double x, int n);
double func_020eec48(double x, int n) {
    double value;
    int exp;

    value = func_020ed38c(x, &exp);
    exp += n;

    return func_020ed448(value, exp);
}
