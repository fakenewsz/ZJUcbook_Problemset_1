#include <stdio.h>

int main(){

    int a , b ,c,d,sum =0;
    double ret=0;

    scanf("%d %d %d %d",&a,&b,&c,&d);
    sum =a+b+c+d;
    ret=sum/4.0;
    printf("Sum = %d; Average = %.1lf",sum, ret);

    return 0;

}