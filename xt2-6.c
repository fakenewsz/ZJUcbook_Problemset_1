#include <stdio.h>
#include <math.h>

double fact(double a){
    double ret=1;
    int i;

    for(i=1;i<=a;i++){
        ret *=i;
    }

    return ret;
}
int main(){
    double sum=0;
    double n;
    double i=1;
    int cnt;
    scanf("%lf",&n);


    for(cnt=1;cnt<=n;cnt++){
        sum+= fact(cnt);
    }
    printf("%.0lf",sum);
    return 0;

}