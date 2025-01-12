/*
皮球从某给定高度自由落下，触地后反弹到原高度的一半，再落下，再反弹，……，如此反复。问皮球在第n次落地时，
 在空中一共经过多少距离？第n次反弹的高度是多少？

        输入格式:
    输入在一行中给出两个非负整数，分别是皮球的初始高度和n，均在长整型范围内。

            输出格式:
    在一行中顺序输出皮球第n次落地时在空中经过的距离、以及第n次反弹的高度，其间以一个空格分隔，保留一位小数。
    题目保证计算结果不超过双精度范围。




*/

#include <stdio.h>


int main() {
    long int i, n = 0;
    double  h = 0,sum = 0; //h精度必须用double， 否则sample1算出来是94.9而不是95.0


    scanf("%lf %ld", &h, &n);
    sum = h;
    if (n == 0) {
        h = 0;
        sum = 0;
    }
    for (i = 2; i <= n; i++) {

        h = h / 2;     //第一次反弹距离总和
        sum += h * 2;//第二次落地距离总和
    }
    h = h / 2;

    printf("%.1lf %.1lf", sum, h);


    return 0;
}