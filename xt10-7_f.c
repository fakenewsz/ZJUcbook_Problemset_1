#include <stdio.h>

void dectobin( int n );

int main()
{
    int n;

    scanf("%d", &n);
    dectobin(n);

    return 0;
}

void dectobin( int n ){

    if(n/2==0){
        printf("%d",n%2);
    }else{

        dectobin(n/2);
        printf("%d",n%2);
    }

}
//一开始想不出来咋做
//n是非负整数，边界情况：n==0,n==1