
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    /*printf("1\v\taaaa");
    printf("\t1");*/
    int a =22;

    printf("八进制----%o\n",a);
    printf("十六进制----%X\n",a);
    printf("十进制----%d\n",a);
    char c;
    c='8';
    char s[10];
    itoa( a ,s ,2);
    printf("二进制----%s\n",s);
    itoa( a ,s ,3);
    printf("三进制----%s\n",s);

    printf("十进制----%d\n",a);
    printf("%d\n",10-'0');
    printf("%c\n",7+'0');
    printf("%d\n",'o'%26);
    printf("%d\n",'p');
    printf("%d\n",'z'-'a');
    printf("%d\n",-3%2);

    printf("%c\n",-3%2);
    printf("A+12=%c\n",'A'+12);
    printf("2%%4 =%d\n",2%4);
    printf("'A'+'C' =%c\n",'A'+'C');
    printf("'A'-'C' =%c\n",'A'-'C');

    return 0;
}
