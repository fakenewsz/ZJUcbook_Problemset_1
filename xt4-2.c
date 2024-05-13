#include <stdio.h>
#include <math.h>

double fact(int a){
    int i;
    double sum=1;
    for(i=1;i<=a;i++){
        sum*=i;
    }
    return sum;
}
int main(){
    int i;
    double eps=1e-5,n,x,sum=0; // 0.00001 =1e-5 负多少就是小数点后几位

    scanf("%lf",&x);
    n=1;
    if(x==0){
        sum=n;
    }else{
        for(i=0;fabs(n)>=eps ;i++){
            n= pow(x,i)/fact(i);
            sum+=n;

        }
    }

    printf("%.4lf",sum);
    return 0;
}