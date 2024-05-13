#include <stdio.h>
#include <math.h>


int main(){
    double sum=0;
    double n;
    double i=1;
    int cnt;
    scanf("%lf",&n);


    for(cnt=1;cnt<=n;cnt++){
        sum+= sqrt(i);
        i++;
    }
    printf("sum = %.2lf",sum);


    return 0;

}