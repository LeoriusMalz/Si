#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    FILE *f1;
    FILE *f2;

    int a = 0;
    int b = 0;
    int c = 0;

    int cash = 0;
    int pash = 0;

    freopen("cuda.in", "r", stdin);
    freopen("cuda.out", "w", stdout);

    scanf("%d%d%d", &a, &b, &c);

    int A = ((a-1)/32 + 1)*32;
    int B = ((b-1)/2 + 1)*2;
    int C = ((c-1)/128 + 1)*128;

    cash = 1536 / A;
    pash = 32768 / (A*B);

    if (pash < cash)
        cash = pash;

    pash = 49152 / C;

    if (pash < cash)
        cash = pash;

    int cuda = (int)round(((cash * a)/1536.0)*100);

    printf("%d", cuda);

    return 0;
}
