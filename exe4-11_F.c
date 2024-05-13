/*
本题要求统计给定整数M和N区间内素数的个数并对它们求和。

输入格式:
    输入在一行中给出两个正整数M和N（1≤M≤N≤500）。

            输出格式:
    在一行中顺序输出M和N区间内素数的个数以及它们的和，数字间以空格分隔

*/

#include <math.h>
#include <stdio.h>

int main() {
    int  sum = 0, cnt = 0;
    int M, N, i, j;
    scanf("%d %d", &M, &N);


    //m>2
    for (i = M; i <= N; i++) {
//是否素数 只需要一个数字除以[2,sqrt n]范围内的每个整数就能判断
        double limit = sqrt(i) ;//此处不能是sqrt+1
        for (j = 2; j <= limit; j++) {
            if (i % j == 0) {
                break;
            }
        }
        if (j > limit) {                //cnt 不要放在内层循环里，
            if (i == 1) {
                cnt=cnt;
            }else{
                sum+=i;
                cnt++;
            }

        }

    }

    printf("%d %d", cnt, sum);
    return 0;
}