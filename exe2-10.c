#include <stdio.h>

int main(){
    float x=0,ret=0;
    scanf("%f",&x);

    if(x){
        ret=1/x;
    }else{
        ret=0;
    }
    printf("f(%.1f) = %.1f",x,ret);

    return 0;
}