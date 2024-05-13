#include <stdio.h>
#include <math.h>

int main(){
    double x=0,ret=0;
    scanf("%lf",&x);


    if(x>=0){
        ret=pow(x,0.5);

    }else {
        ret=pow(x+1,2)+2*x+1/x;

    }

    printf("f(%.2lf) = %.2lf",x,ret);
    return 0;
}