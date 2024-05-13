#include <stdio.h>
#define MAXLINE 80

void zip(char *p);

int main(void) {

    char line[MAXLINE];
    printf("Input the string:");
    gets(line);
    zip(line);
    puts(line);

    return 0;
}
void zip(char *p) {

    char *q = p;
    int n;

    while (*p != '\0') {
        n = 1;
        while (*p == *(p + n)) {//按地址间隔描述两个相邻变量的关系
            n++;
        }
        if (n >= 10) {
            *q++ = (n / 10) + '0';//取n的十位数，替换q下一位数。 因为字符串长度小于80，所以只需要处理两个数位
            *q++ = (n % 10) + '0';// q往后第二位，是n的个位
        } else if (n >= 2) {//n不会是0，n=1不需要操作
            *q++ = n + '0';
        }
        *q++ = *(p + n - 1);
        p = p + n;
    }
    *q = '\0';
}