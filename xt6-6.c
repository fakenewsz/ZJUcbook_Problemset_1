#include <stdio.h>

int reverse( int number );

int main()
{
    int n;

    scanf("%d", &n);
    printf("%d\n", reverse(n));

    return 0;
}
#include <math.h>
int reverse( int number ){
    int n,i,a =0,t,ret,cnt=0;
    int sum=0;

    if(number<0){
        putchar('-');
        number=-number;
    }
    if(number==0){
        ret=0;
    }else{
        t=number;
        while(t!=0){
            t/=10;
            cnt++;
        }
        for(i=1;i<=cnt;i++){
            n=number%10;
            if(!(n==0 && i==1)){
                sum+=n*pow(10,cnt-i);
            }
            number/=10;
        }
    }
    return sum;

}