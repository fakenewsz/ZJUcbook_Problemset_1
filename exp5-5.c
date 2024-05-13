#include <stdio.h>

int gcd( int x, int y );

int main()
{
    int x, y;

    scanf("%d %d", &x, &y);
    printf("%d\n", gcd(x, y));

    return 0;
}

int gcd( int x, int y ){
    int t;
    int ret=0;
    if(x<y){
        t=x;
        x=y;
        y=t;
    }
    if(x%y==0){
        ret= y;
    }else{
        ret= gcd(y,x%y);
    }
    return ret;
}