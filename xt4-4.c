#include <stdio.h>
#include <math.h>


int main(){
    int a,n,i,t;
    double sum=0,X=0;

    scanf("%d %d",&a,&n);
    sum = a;
    t=a;
    for(i=2;i<=n;i++){
        X= a*10+t;
        a=X;
        sum+=X;

    }
    printf("s = %.0lf",sum);

    return 0;
}