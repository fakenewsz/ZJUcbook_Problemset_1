#include <math.h>
#include <stdio.h>

int prime(int p);
void Goldbach(int n);

int main() {
    int m, n, i, cnt;

    scanf("%d %d", &m, &n);
    if (prime(m) != 0) printf("%d is a prime number\n", m);
    if (m < 6) m = 6;
    if (m % 2) m++;
    cnt = 0;
    for (i = m; i <= n; i += 2) {
        Goldbach(i);
        cnt++;
        if (cnt % 5) printf(", ");
        else
            printf("\n");
    }

    return 0;
}

int prime(int p) {
    int ret=0 , flag = 0;
    int i, limit;

    if (p <= 1) {
        ret = 0;
    } else if (p == 2) {
        ret = 1;
    } else {
        limit = sqrt(p)+1;  //这里必须+1【【【

        for (i = 2; (i <= limit) && (flag == 0); i++) { //这里i不能从1开始
            if (p % i == 0) {
                flag = 1;
            }
        }
        if (i > limit) {
            ret = 1;
        }
    }
    return ret;
}
void Goldbach(int n) {//搞不来
    int i, cnt = 0;
    for (i = 2; i <= n; i++) {
        if (prime(i) == 1 && prime(n - i) == 1) {//从小到大找素数分解组合，输出第一个
            cnt++;
            if (cnt == 1) {
                printf("%d=%d+%d", n, i, n - i);
            }
        }
    }
}