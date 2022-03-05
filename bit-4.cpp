#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *hex(char *str);
void append(char *A, char *nums);

int main() {
    char a[2] = "";

    scanf("%s", a);

    char *A = hex(a);

    if (A[7] == '0')
        printf("fe ");
    else
        printf("ma ");

    if (A[6] == '0')
        printf("du ");
    else
        printf("cl ");

    if (A[5] == '0')
        printf("nh ");
    else
        printf("ha ");

    if (A[4] == '0')
        printf("sk ");
    else
        printf("tr ");

    if (A[2] == '0') {
        if (A[3] == '0')
            printf("bn ");
        else
            printf("rd ");
    }

    else {
        if (A[3] == '0')
            printf("bw ");
        else
            printf("bk ");
    }

    if (A[0] == '0') {
        if (A[1] == '0')
            printf("bu ");
        else
            printf("ge ");
    }

    else {
        if (A[1] == '0')
            printf("gy ");
        else
            printf("da ");
    }

    free(A);

    return 0;
}

char *hex(char *str) {
    char *s = (char*)calloc(8, sizeof(char));

    for (int i=0; str[i]!='\0'; i++)
        switch (str[i]) {
            case '0':
                append(s, "0000");
                break;

            case '1':
                append(s, "0001");
                break;

            case '2':
                append(s, "0010");
                break;

            case '3':
                append(s, "0011");
                break;

            case '4':
                append(s, "0100");
                break;

            case '5':
                append(s, "0101");
                break;

            case '6':
                append(s, "0110");
                break;

            case '7':
                append(s, "0111");
                break;

            case '8':
                append(s, "1000");
                break;

            case '9':
                append(s, "1001");
                break;

            case 'A':
            case 'a':
                append(s, "1010");
                break;

            case 'B':
            case 'b':
                append(s, "1011");
                break;

            case 'C':
            case 'c':
                append(s, "1100");
                break;

            case 'D':
            case 'd':
                append(s, "1101");
                break;

            case 'E':
            case 'e':
                append(s, "1110");
                break;

            case 'F':
            case 'f':
                append(s, "1111");
                break;
        }



    return s;
}

void append(char *A, char *nums) {
    static int i = 0;

    for (int k=0; k<4; k++) {
        A[i] = nums[k];
        i++;
    }
}
