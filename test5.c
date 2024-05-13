//<C语言>P211 例8-10

#include <stdio.h>
#include <stdlib.h>


int main(){
    int n,sum,i;
    int *p;


    scanf("%d",&n);

    if( ( p =(int *)calloc(n,sizeof(int )))==NULL){
        printf("Not capable ");
        exit(1);
    }
    for(i=0;i<n;i++){
        scanf("%d",p+i);
    }
    sum =0;
    for(i=0;i<n;i++){
        sum=sum+*(p+i);//*号提取p+i指向(而非p+i存储的)的地址上的值
    }
    printf("the sum is %d\n",sum);

    free(p);

    return 0;
}