#include <stdio.h>
#define MAXN 10
int main() {
    int a[MAXN][MAXN];
    int i, j, n, m;

    scanf("%d %d", &m, &n);

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    //输入数组
    m = m % n;//m>n需要处理一下，以n为周期，所以对n取余
    for (i = 0; i< n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", a[i][(n - m + j) % n]);  //规律需要自己推理下，题目提示可以归纳出(n-m+j)
        }
        printf("\n");
    }


    return 0;
}