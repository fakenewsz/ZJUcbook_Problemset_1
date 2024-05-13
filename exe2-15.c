#include <stdio.h>
#include <math.h>
int main() {
    int N = 0, a=1,i;
    double S = 0;
    scanf("%d", &N);

    for (i = 1; i <= N; a+=3,i++) { //i 项数  a 每项分母
        S += (pow(-1,i-1))*(1.0 /a);
    }

    printf("sum = %.3lf", S);

    return 0;
}