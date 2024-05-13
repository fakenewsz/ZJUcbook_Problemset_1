#include <stdio.h>
#include <string.h>
int main(void) {

    char s[5][80];
    char t[80];
    int i, j, index;

    //按行输入字符串数组
    for (i = 0; i < 5; i++) {
        scanf("%s", s[i]);
    }

    //选择排序
    for (i = 0; i < 4; i++) {
        index = i;
        for (j = i + 1; j < 5; j++) {
            if (strcmp(s[j], s[index]) < 0) {
                index = j;
            }
        }
        strcpy(t, s[i]);
        strcpy(s[i],s[index]);
        strcpy(s[index],t);
    }

    printf("After sorted:\n");

    for(i=0;i<5;i++){

        printf("%s\n",s[i]);
    }

    return 0;
}
