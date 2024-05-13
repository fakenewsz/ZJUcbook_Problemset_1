#include <stdio.h>

int fib(int n);
void PrintFN(int m, int n);

int main() {
    int m, n, t;

    scanf("%d %d %d", &m, &n, &t);
    printf("fib(%d) = %d\n", t, fib(t));
    PrintFN(m, n);

    return 0;
}

int fib(int n) {

    int x , x1 = 1, x2 = 1;
    int i, ret = 0;

    if (n == 1||n==2) {    //第一第二个 fib数都是1,
        ret = 1;
    } else {
        for (i = 2; i < n; i++) {//i=2， 但是是从第3个fib数开始输出
                                    //(i=3;i<=n;i++ ) 也行
            x = x1 + x2;
            x1 = x2;
            x2 = x;
        }
        ret = x;
    }
    return ret;//返回第n个fib数 ret
}

void PrintFN(int m, int n) {
    int item = 0, i = 1;
    while (fib(i) < m) {//第i个fib数，小于m时，不计数fib数，只算下标，
        i++;
    }
    while (fib(i) <= n) {//第i个 fib数进入 [m,n]区间，再计数
        item++;
        if (item == 1) {
            printf("%d", fib(i));
        } else {
            printf(" %d", fib(i));
        }

        i++;
    }
    if (item == 0) {
        printf("No Fibonacci number");
    }
}