/*
给定平面上任意三个点的坐标(x1,y1)(x2,y2)(x3,y3)，检验它们能否构成三角形。
输入在一行中顺序给出六个[−100,100]范围内的数字，即三个点的坐标x1 y1 x2 y2 x3 y3
若这3个点不能构成三角形，则在一行中输出“Impossible”；
若可以，则在一行中输出该三角形的周长和面积，格式为“L = 周长, A = 面积”，输出到小数点后2位

*/


#include <math.h>
#include <stdio.h>
int main() {
    double x1, y1, x2, y2, x3, y3,a, b, c, L, A,p;


    p=L = A = b = c  = x1 = x2 = x3 = y1 = y2 = y3 = 0.0;

    scanf("%lf %lf %lf %lf %lf %lf", &x1, &y1, &x2, &y2, &x3, &y3);

    a = sqrt( pow(x2-x1, 2) + pow(y2-y1, 2)); //是两点坐标之差 拿来平方
    b = sqrt(pow(x3-x2, 2) + pow(y3-y2, 2));
    c = sqrt(pow(x3-x1, 2) + pow(y3-y1, 2));

    if((a+b>c)&&(a+c>b)&&(b+c>a)){  //有三边怎么计算三角形面积？？？海伦公式。
        L=a+b+c;
        p=0.5*L;
        A= sqrt(p*(p-a)*(p-b)*(p-c));
        printf("L = %.2lf, A = %.2lf",L,A);

    }else{
        printf("Impossible");
    }

    return 0;
}