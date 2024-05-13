#include <stdio.h>
#include <string.h>

#define MAXS 10

void Shift( char s[] );

void GetString( char s[] ); /* 实现细节在此不表 */

int main()
{
    char s[MAXS];

    GetString(s);
    Shift(s);
    printf("%s\n", s);

    return 0;
}

void Shift( char s[] ){
    char x[MAXS],y[MAXS];//把s切成两个数组xy，xy互换顺序

    strcpy(x,s);
    x[3]='\0';//第四位赋'\0'，之后字符串处理函数就会认定 这里是结尾，不需要后面的再分别赋0

    strcpy(y,s+3);

    strcat(y,x);
    strcpy(s,y);

}