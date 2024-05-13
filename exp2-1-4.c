#include <stdio.h>
int main(){

    int i;

    for(i=1;i<=3;i++) {
        if (i == 1) {
            printf("  A\n");
        }
        if (i == 2) {
            printf("A   A\n");
        }
        if (i == 3) {
            printf("  A");
        }


    }
    return 0;
    }