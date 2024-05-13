#include <stdio.h>

int main(void) {

    int i, j;

    for (i = 0; i < 4; i++) {
        for (j = 0; j < i; j++) {
            printf(" ");
        }
        for (j = 3 - i; j > 0; j--) {
            printf("* ");
        }
        printf("*");
        printf("\n");
    }


    return 0;
}
