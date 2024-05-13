#include <stdio.h>

int narcissistic( int number );
void PrintN( int m, int n );

int main()
{
    int m, n;

    scanf("%d %d", &m, &n);
    if ( narcissistic(m) ) printf("%d is a narcissistic number\n", m);
    PrintN(m, n);
    if ( narcissistic(n) ) printf("%d is a narcissistic number\n", n);

    return 0;
}
//没用pow怎么算位数？已知number自然用 多次除10算
int narcissistic( int number ){
    int x,reminder,i;
    int sum2=0,sum=1,cnt=0, ret=0;

    x=number;
    while(x!=0){
        x=x/10;
        cnt++;//cnt是位数
    }
    x=number;

    while(x!=0){
        reminder=x%10;
        for(i=1;i<=cnt;i++){
            sum=sum*reminder;
        }
        x=x/10;
        sum2+=sum;
        i=1;      //没有这两个重置，直接跑不出结果。  答案作者说是为了防止i 和sum 两次循环后太大
        sum=1;

    }
    if(sum2==number){
        ret=1;
    }
    return ret;
}
void PrintN( int m, int n ){

    int i;
    for(i=m+1;i<n;i++){
        if(narcissistic(i) == 1){
            printf("%d\n",i);
        }
    }

}