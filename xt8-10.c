#include <stdio.h>
#include <stdlib.h>


int main(void) {

    int n,*p=NULL,sum,i;
    double average,max,min;

    scanf("%d",&n);

    p=(int *) calloc(n,sizeof(int));


    for(i=0;i<n;i++){
        scanf("%d",p+i);

    }
    sum=0;
    max=*p;
    min=*p;
    for(i=0;i<n;i++){
        sum=sum+*(p+i);
        if(*(p+i)>=max ){
            max=*(p+i);
        }
        if(*(p+i)<=min){
            min= *(p+i);
        }
    }

    average= 1.0*sum/n;

    printf("average = %.2lf\n",average);
    printf("max = %.2lf\n",max);
    printf("min = %.2lf\n",min);

    free(p);

    return 0;
}