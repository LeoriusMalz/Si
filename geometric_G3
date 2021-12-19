#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int max(int a, int b)
{
    if (a >= b) {
        return a;
    }
    else {
        return b;
    }
}

int min(int a, int b)
{
    if (a <= b) {
        return a;
    }
    else {
        return b;
    }
}

int main()
{   
        int x1 = 0, y1 = 0, x2 = 0, y2 = 0, x3 = 0, y3 = 0;
        int x = 0, y = 0;
        int a = 0, b = 0, c = 0;
    
        scanf("%d %d \n %d %d \n %d %d \n %d %d", &x1, &y1, &x2, &y2, &x3, &y3, &x, &y);
        
        if (x1 == x2 && x2 == x3 && y1 == y2 && y2 == y3) {
            if (x == x1 && y == y1) {
                printf("In\n");
            }
            else {
                printf("Out\n");
            }
        }
        
        else if ((x3-x1)*(y2-y1) == (y3-y1)*(x2-x1)) {
            if ((x-x1)*(y3-y1) == (y-y1)*(x3-x1)) {
                if (x >= min(min(x1,x2),min(x2,x3)) && x <= max(max(x1,x2),max(x2,x3))) {
                    printf("In\n");
                }
                else {
                    printf("Out\n");
                }
            }
            else {
                printf("Out\n");
            }
        }
        
        else {
            a = (x1-x)*(y2-y1)-(x2-x1)*(y1-y);
            b = (x2-x)*(y3-y2)-(x3-x2)*(y2-y);
            c = (x3-x)*(y1-y3)-(x1-x3)*(y3-y);
            
            if ((a <= 0 && b <= 0 && c <= 0) || (a >= 0 && b >= 0 && c >= 0)) {
                printf("In\n");
            }
            else {
                printf("Out\n");
            }
        }

    return 0;
}
