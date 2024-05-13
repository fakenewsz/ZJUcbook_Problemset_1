#include <stdio.h>

int factorsum(int number);
void PrintPN(int m, int n);

int main() {
    int m, n;

    scanf("%d %d", &m, &n);
    if (factorsum(m) == m) printf("%d is a perfect number\n", m);
    if (factorsum(n) == n) printf("%d is a perfect number\n", n);
    PrintPN(m, n);

    return 0;
}
#include <math.h>  //函数题也可以自己加 头文件
int factorsum(int number)
{
     int sum, limit, i;

    if (number == 1)
     {
        sum = 0;
    } else {
        sum = 1,
        limit = sqrt(number);
        for (i = 2; i <= limit; i++)   //这里必须是<= limit
        {
            if (number % i == 0)
            {
                sum += (i + number / i);//一次性找到两个约数，n能被i整除也能被(n/i)整除
            }
        }
    }
    return sum;
}
void PrintPN(int m, int n) // 输出函数不会写
{
    int flag = 0, i;
    for (m; m <= n; m++)
    {
        if (factorsum(m) == m)
        {
            flag = 1;
            printf("%d = 1", m);
            for (i = 2; i < m; i++)
            {
                if (m % i == 0)
                {
                    printf(" + %d", i);
                }
            }
            putchar('\n');
        }
    }
    if (flag == 0)
    {
        printf("No perfect number");
    }
}