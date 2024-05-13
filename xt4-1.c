#include <stdio.h>

int main(){
    int n,sum=0;
    int i;

    scanf("%d",&n);

    for (;n>0;){
        if(n%2==0){

        }else{
            sum+=n;
        }

        scanf("%d",&n);

    }
    printf("%d",sum);
    return 0;
}