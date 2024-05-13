#include <stdio.h>

double fact(int a ){
    double ret=1;
    int i;
    for(i=1;i<=a;i++) {
        ret *= i;
    }
    return ret;
}

int main(){

    double  sum=1;
    int n,i;

    scanf("%d",&n);

    for(i=1;i<=n;i++){
        sum+= 1.0/(fact(i));
    }

    printf("%.8lf",sum);

    return 0;
}