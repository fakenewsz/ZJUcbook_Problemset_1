#include <stdio.h>

int sign( int x );

int main()
{
    int x;

    scanf("%d", &x);
    printf("sign(%d) = %d\n", x, sign(x));

    return 0;
}

int sign( int x ){

    int ret;
    if(x>0) ret=1;
    else if(x==0) ret=0;
    else ret=-1;
    return ret;
}