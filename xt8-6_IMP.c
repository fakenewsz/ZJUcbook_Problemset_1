#include <stdio.h>
#define MAXN 20

void delchar(char *str, char c);
void ReadString(char s[]); /* 由裁判实现，略去不表 */

int main() {
    char str[MAXN], c;

    scanf("%c\n", &c);
    ReadString(str);
    delchar(str, c);
    printf("%s\n", str);

    return 0;
}

//很巧妙。
void delchar(char *str, char c) {
    char *t;
    t = str;

    while (*str != '\0') {//两轨并行，t遇到非a 才复制。
        if (*str != c) {
            *t = *str;
            t++;    //如果遇到一个 目标字符c，t就慢str一个身位,相当于str[i]=str[i+1]
        }
        str++;
    }

    *t = '\0';  //t就是str ,不用回赋值，最后补0
}