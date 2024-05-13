#include <stdio.h>
int add(int a );

int main(void){

    int n,sum;
    scanf("%d",&n);
    sum=add(n);
    printf("%d",sum);
    return 0;
}

int sum( int n ){
    if(n<=0){
        return 0;
    }else if(n==1){
        return 1;
    }else{
        return sum(n-1)+n;
    }

}