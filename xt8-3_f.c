#include <stdio.h>
#define MAXN 10

void ArrayShift(int a[], int n, int m);

int main() {
    int a[MAXN], n, m;
    int i;

    scanf("%d %d", &n, &m);
    for (i = 0; i < n; i++) scanf("%d", &a[i]);

    ArrayShift(a, n, m);

    for (i = 0; i < n; i++) {
        if (i != 0) printf(" ");
        printf("%d", a[i]);
    }
    printf("\n");

    return 0;
}
//将数组a中的最后一个元素放入一个临时变量t，
// 然后从将数组a 的剩余变量往后移一位，再将临时变量赋值给数组s 的第0个元素， 循环m次。
void ArrayShift(int a[], int n, int m) {

    int t;
    if (m > n) {
        m = m % n;
    }


    for (int i = 0; i < m; i++) {
        t = a[n - 1];
        for (int j = n-2; j >=0; j--) {   // (j=0;j<n-1;j++)和(j=n-2;j>=0;j--)在执行没有中间变量的元素互换的时候，不能等价
            a[j+1] = a[j];  //从最右边开始，每个元素往右复制一格
        }
        a[0] = t;
    }
}