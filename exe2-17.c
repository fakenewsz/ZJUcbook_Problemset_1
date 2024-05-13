#include <stdio.h>
#include <math.h>
int main(){
    int n=0,i,ret=0;
    scanf("%d",&n);

    if(n<0){
        goto out;
    }


    for(i=0;i<=n;i++){
        ret= pow(3,i);
        printf("pow(3,%d) = %d\n",i,ret);
    }





out:
    return 0;
}