/*
本题要求编写程序，打印一个高度为n的、由“*”组成的正菱形图案。

        输入格式:
    输入在一行中给出一个正的奇数n。

            输出格式:
    输出由n行星号“*”组成的菱形，如样例所示。每个星号后跟一个空格。

*/




//打印图案，经常不会


#include <stdio.h>


int main() {
    int n, i, j, k;


    scanf("%d", &n);

    for (i = 1; i <= n / 2 + 1; i++) {// 行
        for (j = 1; j <= (n + 1) / 2 - i; j++) {
            printf("  ");//第i行，2i个空格，两个两个打印
        }
        for (k = 1; k <= 2 * i - 1; k++) {
            printf("* ");
        }
        printf("\n");
    }
    //分两半，两半的判断条件加起来 == n+1
    for (i = 1; i <= n / 2; i++) {
        for (j = 1; j <= i; j++) {
            printf("  ");//空格两个
        }
        for (k = 1; k <= n - 2 * i; k++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}