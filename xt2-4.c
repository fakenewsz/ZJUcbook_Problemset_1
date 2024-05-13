#include <math.h>
#include <stdio.h>


int main() {
    double sum = 0;
    int n;//(m<=n)
    int i, j, cnt = 1;
    scanf("%d", &n);


    for (i = 1, j = 1; cnt <= n; i += 2, j++, cnt++) {
        sum += ((double) j / i) * pow(-1, cnt - 1);

   /*     printf("j =%d\n", j);
        printf("i =%d\n", i);
        printf("j/i =%lf\n",(double)j/i);
        printf("cnt =%d\n", cnt);
        printf("(-1)^cnt-1 = %lf\n", pow(-1, cnt - 1));
        printf("\n");
*/
    }
    printf("%.3lf", sum);


    return 0;
}