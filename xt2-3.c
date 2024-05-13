#include <stdio.h>
#include <math.h>


int main(){
    double sum=0;
    int m ,n ;//(m<=n)
    int i;

    scanf("%d %d",&m,&n);

    for(i=m;i<=n;i++){
        sum+=pow(i,2)+1.0/i;

    }
    printf("sum = %.6lf",sum);


    return 0;

}