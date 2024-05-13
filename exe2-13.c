#include <stdio.h>

int main() {
    int N = 0, a;
    double S = 0;
    scanf("%d", &N);

    for (a = 1; a <= N; a++) {
        S += 1.0 / a;//1.0 不是1/a  等号右边也得是浮点数，才能赋值给左边
    }

    printf("sum = %.6lf", S);

    return 0;
}