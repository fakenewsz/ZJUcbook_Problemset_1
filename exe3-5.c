#include <stdio.h>

int main() {

    int n, y = 0, cnt = 0, i;


    scanf("%d", &n);

    if (n > 2000 && n <= 2100) {
        for (i = 2001; i <= n; i++) {
            if ((i % 4 == 0 && (i % 100) != 0) || (0 == i % 400 )) {
                printf("%d\n", i);
                cnt++;
            }

        }
        if (cnt == 0) {
            printf("None");
        }
    } else {
        printf("Invalid year!");
    }


    return 0;
}