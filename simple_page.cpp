#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

int main() {
    unsigned int N = 0;
    unsigned int logical = 0;
    unsigned int index = 0;

    scanf("%ud", &N);

    unsigned int *Ans = (unsigned int*) calloc(N, sizeof(unsigned int));

    for (unsigned int i = 0; i < N; i++)
        scanf("%x", &Ans[i]);

    scanf("%x", &logical);

    index = (logical & (0b111111 << 26)) >> 26;

    if (index < N)
        printf("%x", (Ans[index] + logical - (index << 26)));

    else
        printf("error");

    free(Ans);

    return 0;
}
