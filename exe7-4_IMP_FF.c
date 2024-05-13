#include <stdio.h>

#define MAXN 20
int main(void) {

    int a[MAXN], b[MAXN], c[2 * MAXN];
    int n, m, i, j, k = 0, flag, tg;
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    scanf("%d", &m);
    for (j = 0; j < m; j++) {
        scanf("%d", &b[j]);
    }

    k = 0;
    for (i = 0; i < n; i++) {
        flag = 0;
        for (j = 0; j < m; j++) {
            if (b[j] == a[i]) {
                flag++;
            }
        }
        if (flag == 0) {
            c[k++] = a[i];
        }

    }

    for (i = 0; i < m; i++) {
        flag = 0;
        for (j = 0; j < n; j++) {
            if (b[i] == a[j]) {
                flag++;
            }
        }
        if (flag == 0) {
            c[k++] = b[i];
        }

    }

    printf("%d", c[0]);
    for (i = 1; i < k; i++) {
        tg = 0;
        for (j = 0; j < i; j++) {
            if (c[j] == c[i]) {
                tg = 1;
            }
        }
        if (tg == 0) {
            printf(" %d", c[i]);
        }

    }

    return 0;
}