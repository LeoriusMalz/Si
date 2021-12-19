#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    bool result = false;
    int i = 0, j = 0, k = 0;
    int N = 0, X = 0, Y = 0, Z = 0;

    scanf("%d", &N);
    j = N - 1;

    int *x = (int*) malloc(N*sizeof(int));
    int *y = (int*) malloc(N*sizeof(int));

    scanf("%d %d", &X, &Y);

    for (i = 0; i < N; i++) {
        scanf("%d %d", &x[i], &y[i]);
    }

    for (i = 0; i < N; i++) {
        if (x[i] == X && y[i] == Y) {
            printf("YES");

            free(x);
            free(y);

            return 0;
        }
    }

    for (i = 0; i < (N-1); i++) {
        if (x[i] == x[i+1] && y[i] == y[i+1]) {
            k += 1;
        }
        else {
            k = 0;
        }
    }

    if (k == (N-1)) {
        if (X == x[i] && Y == y[i]) {
            printf("YES");
        }
        else {
            printf("NO");
        }
    }

    else {
        for (i = 0; i < N; i++) {
            //Z = y[j] - y[i];
            //(((x[i]-X)*Z + (Y-y[i])*(x[j]-x[i]))/Z < 0)
            if ((y[i] < Y && y[j] >= Y || y[j] < Y && y[i] >= Y) && (x[i] + (x[j]-x[i])*(Y-y[i])/(y[j]-y[i]) < X)) {
                result = !result;
            }
    
            j = i;
        }

        if (result == 1) {
            printf("YES");
        }
        else {
            printf("NO");
        }
    }

    free(x);
    free(y);

    return 0;
}
