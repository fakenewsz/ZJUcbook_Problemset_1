#include <math.h>
#include <stdio.h>

double funcos(double e, double x);

int main() {
    double e, x;

    scanf("%lf %lf", &e, &x);
    printf("cos(%.2f) = %.6f\n", x, funcos(e, x));

    return 0;
}

double funcos(double e, double x) {
    double sum = 1,fact = 1; // 多项式容器要是double 不然损失精度
    double n = 1,z;
    int i, j;
    int flag=-1;

    for (i = 2; n > e; i+=2) {  //分子指数
        for (j = 1; j <=i; j++) {//计算分母的阶乘，
                fact *= j;
        }
        z=pow(x, i);
        n = z / fact;
        sum =sum+ n*flag;
        flag=-flag;
        fact=1;

    }
//核心两重循环复习的时候重写一遍
    return sum;
}