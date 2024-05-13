#include <stdio.h>

double calc_pow( double x, int n );

int main()
{
    double x;
    int n;

    scanf("%lf %d", &x, &n);
    printf("%.0f\n", calc_pow(x, n));

    return 0;
}

double calc_pow( double x, int n ){
    double ret;
    if(x==0 ){
        return 0;
    }else if (n==1){
        return x;
    }else {
        return calc_pow(x,n-1)*x;//一般是return 函数自己
    }

}