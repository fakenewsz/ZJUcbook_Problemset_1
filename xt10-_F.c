#include <stdio.h>

double fn( double x, int n );

int main()
{
    double x;
    int n;

    scanf("%lf %d", &x, &n);
    printf("%.2f\n", fn(x,n));

    return 0;
}

double fn( double x, int n ){

    if(n==1){
        return x;
    }else {
        return x-x*fn(x,n-1);  //找不来递推式
    }

}
//当n=3时，f(x,3)=x-x(x-x*x)=x-x2+x3;
//当n=4时，f(x,4)=x-x(x-x(x-x*x)=x-x2+x3-x4;
//当n=5时，f(x,5)=x-x(x-x(x-x(x-x*x)=x-x2+x3-x4+x5