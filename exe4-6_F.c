#include <stdio.h>
int main() {
    int cnt = 0, N, i = 0;
    int number;
    scanf("%d %d", &number, &N);

    do {
        scanf("%d", &i);
        if (i < 0) {
            break;
        }
        cnt++;
        if (i < number) {
            printf("Too small\n");
        } else if (i > number) {
            printf("Too big\n");
        }
    } while (i != number && cnt < (N + 1));//先给猜n+1次或者N次，次数有效无效，留到之后判断，否则不会输出次数无效的情况。

    if (i < 0) {
        printf("Game Over\n");
    } else {                                    //cnt条件最好从小到大判断， 不然会出现莫名其妙的错误
        if (cnt == 1) {
            printf("Bingo!\n");
        } else if (cnt > 1 && cnt <= 3) {
            printf("Lucky You!\n");
        } else if (cnt > 3 && cnt <= N) {
            printf("Good Guess!\n");
        } else if (cnt > N) {
            printf("Game Over\n");
        }
    }
    return 0;
}