#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float det(int **a) {
    int S = 0;
    int P = a[0][0]*a[1][1]*a[2][2] + a[0][1]*a[1][2]*a[2][0] + a[0][2]*a[1][0]*a[2][1];
    int M = a[0][2]*a[1][1]*a[2][0] + a[0][1]*a[1][0]*a[2][2] + a[0][0]*a[1][2]*a[2][1];

    if (P == M) {
        return 0;
    }
    else {
        S = P - M;
        return S;
    }
}

int main()
{
    int x1 = 0, y1 = 0, x2 = 0, y2 = 0, x3 = 0, y3 = 0;
    double x = 0, y = 0;

    scanf("%d %d %d %d %d %d", &x1, &y1, &x2, &y2, &x3, &y3);

    int **A = (int**)malloc(3 * sizeof(int*));
    int **B = (int**)malloc(3 * sizeof(int*));
    int **C = (int**)malloc(3 * sizeof(int*));

    for (int i = 0; i < 3; i++)
    {
        A[i] = (int*)malloc(3 * sizeof(int));
        B[i] = (int*)malloc(3 * sizeof(int));
        C[i] = (int*)malloc(3 * sizeof(int));
    }

    for (int i = 0; i < 3; i++)
    {
        A[i][2] = B[i][2] = C[i][2] = 1;
    }

    C[0][0] = B[0][1] = x1;
    C[1][0] = B[1][1] = x2;
    C[2][0] = B[2][1] = x3;

    C[0][1] = A[0][0] = y1;
    C[1][1] = A[1][0] = y2;
    C[2][1] = A[2][0] = y3;

    A[0][1] = x2*x3 + y1*y1;
    A[1][1] = x3*x1 + y2*y2;
    A[2][1] = x1*x2 + y3*y3;

    B[0][0] = x1*x1 + y2*y3;
    B[1][0] = x2*x2 + y1*y3;
    B[2][0] = x3*x3 + y2*y1;

    x = det(A)/det(C);
    y = det(B)/det(C);

    for (int i = 0; i < 3; i++)
    {
        free(A[i]);
        free(B[i]);
        free(C[i]);
    }

    free(A);
    free(B);
    free(C);

    printf("%lf %lf", x, y);

    return 0;
}
