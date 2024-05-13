/*本题要求两个给定正整数的最大公约数和最小公倍数。

输入格式:
    输入在一行中给出两个正整数M和N（≤1000）。

            输出格式:
    在一行中顺序输出M和N的最大公约数和最小公倍数，两数字间以1空格分隔。*/


#include <stdio.h>
// 最小公倍数=两数积/最大公约数
//所以问题主要是求最大公约数。
// 辗转相除法

int fact(int a, int b) {
    int c = 0, d = 1;
    while (d != 0) {
        c = a / b;//a能整除b的话， b直接就是最大公约数
        if (c == 0) {
            a = b;
        } else {
            d = a % b;//除数是b 如果这轮运算后算出 最大公约数，执行完a=b之后，a的值=b，b的值=0
            a = b;
            b = d;
        }
    }
    return a;
}


int main() {
    int m, n, a, b, c, d, ret = 0, t;
    double max = 0;

    scanf("%d %d", &a, &b);

    if (a > b) {
        ret = fact(a, b);
    } else {
        ret = fact(b, a);
    }
    max = a * b / ret;


    printf("%d %.0lf", ret, max);


    return 0;
}