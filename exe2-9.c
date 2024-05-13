#include <stdio.h>

int main() {

    int A = 0, B = 0, sum = 0, diff = 0, pro = 0, quo = 0;
    scanf("%d %d", &A, &B);

    sum=A+B;
    diff=A-B;
    pro=A*B;
    quo=A/B;


    printf("%d + %d = %d\n",A,B,sum);
    printf("%d - %d = %d\n",A,B,diff);
    printf("%d * %d = %d\n",A,B,pro);
    printf("%d / %d = %d\n",A,B,quo);

    return 0;
}