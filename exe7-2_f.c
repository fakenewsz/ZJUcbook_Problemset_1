#include <stdio.h>
#define MAXN 10
int main() {
    int i = 0, max = 0, n = 0;
    int list[MAXN];
    scanf("%d", &n);


    for (i = 0; i < n; i++) {
        scanf("%d", &list[i]);
    }

    max = 0; // max 是最大值的下标，一开始设置成List[0]不行

    for (i = 0; i < n; i++) {
        if (list[i] < 0) {
        }
        if (list[i] > list[max]) {
            max = i;
        }
    }

    printf("%d %d", list[max], max);

    return 0;
}