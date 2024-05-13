#include <stdio.h>

int main() {

    int n=0,ret=-2;
    scanf("%d",&n);

    if(n<0){
        ret=-1;
    } else if (n>0){
        ret=1;
    }else{
        ret=0;
    }

    printf("sign(%d) = %d",n,ret);

    return 0;
}
