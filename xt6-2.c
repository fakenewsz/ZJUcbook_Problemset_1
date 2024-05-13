#include <stdio.h>

int fn( int a, int n );
int SumA( int a, int n );

int main()
{
    int a, n;

    scanf("%d %d", &a, &n);
    printf("fn(%d, %d) = %d\n", a, n, fn(a,n));
    printf("s = %d\n", SumA(a,n));

    return 0;
}

int fn( int a, int n ){
    int sum=0,X=0;
    int i,t=0;
    t=a;
    sum=a;
    for(i=2;i<=n;i++){
        X=10*a;
        a=X;
        sum+=X;
    }
    return sum;
}
int SumA( int a, int n ){
    int sum=0,X=0;
    int i,t=0;
    t=a;
    sum=a;
    for(i=2;i<=n;i++){
        X=10*a+t;
        a=X;
        sum+=X;
    }
    return sum;

}