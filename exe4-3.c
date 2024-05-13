
//fabs()求浮点数绝对值
#include <stdio.h>
#include <math.h>



int main(){
    double sum=0,eps,N=1,j=1.0;
    int flag=1;
    scanf("%lf",&eps);

    if(eps<N){
        while(fabs(N)>eps){
                N= (1.0/j)*flag;
                sum+=N;
                flag=-flag;
                j+=3.0;
        }
    //最后一项不大于eps ，但是还是有这一项，所以得最后加一次
    }else{
        sum =N;
    }

    printf("sum = %.6lf", sum);
    return 0;
}