#include <stdio.h>

int main() {

    char a[80];
    char c;
    int cnt = 0, flag = 0, index = -1;
    scanf("%c ", &c);

    while ((a[cnt++]=getchar()) != '\n') {    //getchar���� (c=getchar())!=''������
    }
    for (int i = 0; i <= cnt; i++) {
        if (a[i] == c) {
            flag = 1;
            index = i;
        }
    }
    if (flag == 1) {
        printf("index = %d", index);
    } else {
        printf("Not Found");
    }


    return 0;
}