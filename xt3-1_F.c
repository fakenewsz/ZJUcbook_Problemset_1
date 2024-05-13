#include <stdio.h>

int main() {
    int a, b, c;
    int max, min;

    scanf("%d %d %d", &a, &b, &c);
    max = min = b;
    if (a >= c && a >= b) {//确定ac的相对位置，b也就确定了。因为a 和c也都和b对比了
        max = a;
    }
    if (c >= a && c >= b) {
        max = c;
    }
    if (a <= b && a <= c) {
        min = a;
    }
    if (c <= a && c <= b) {
        min = c;
    }

    printf("%d->%d->%d\n", min, a + b + c - min - max, max);//这样不用计算b

    return 0;
}
