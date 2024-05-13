#include <stdio.h>

int main() {

    int i,cnt=0;
    char c[80];

    while((c[cnt++]=getchar())!='\n'){//这里把'\n'也放进去了

    }
    for(i=cnt-2;i>=0;i--){ //所以得-2
        putchar(c[i]);

    }

    return 0;
}