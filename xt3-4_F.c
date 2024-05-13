



#include <stdio.h>


int main() {
    int A,B,C,D,E;
    int N = 0, s, i;
    A=B=C=D=E=0;
    scanf("%d", &N);

    for (i = 0; i < N; i++) {
        scanf("%d", &s);
        if (s >= 90) {
            A++;
        } else if (s >= 80) {
            B++;
        } else if (s >= 70) {
            C++;
        } else if (s >= 60) {
            D++;
        } else {
            E++;
        }
    }

    printf("%d %d %d %d %d\n", A, B, C, D, E);
    return 0;
}
//在clion里 算不出来正确答案，在pat上答案正确。 因为右上角忘记换执行文件了。。
