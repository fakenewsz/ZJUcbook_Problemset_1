/*
本题目要求编写程序，输入一行字符，将每个单词的首字母改为大写后输出。
 所谓“单词”是指连续不含空格的字符串，各单词之间用空格分隔，空格数可以是多个。*/

#include <stdio.h>
int main() {

    char ch;
    int flag = 1;
    ch = getchar();

    while ((ch) != '\n') {
        //什么时候跳出循环？
        if (flag == 1) {
            flag = 0;
            if (ch >= 'a' && ch <= 'z') {
                ch += 'A' - 'a' ;
            }
        }
        if (ch == ' ') {//下一个单词，从此开始需要重新判断首字母
            flag = 1;
        }

        putchar(ch);
        ch = getchar();
    }


    return 0;
}