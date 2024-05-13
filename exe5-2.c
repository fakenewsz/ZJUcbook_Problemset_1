#include <stdio.h>

int max( int a, int b );

int main()
{
    int a, b;

    scanf("%d %d", &a, &b);
    printf("max = %d\n", max(a, b));

    return 0;
}

int max( int a, int b ){
    int ret;
    if (a>=b){
        ret=a;
    }else{
        ret =b;
    }
    return ret;
}