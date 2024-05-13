#include <stdio.h>
#define MAXN 20

void strmcpy( char *t, int m, char *s );
void ReadString( char s[] ); /* 由裁判实现，略去不表 */

int main()
{
    char t[MAXN], s[MAXN];
    int m;

    scanf("%d\n", &m);
    ReadString(t);
    strmcpy( t, m, s );
    printf("%s\n", s);

    return 0;
}
#include <string.h>
void strmcpy( char *t, int m, char *s ){

    t=t+m-1; //t+m-1是第m个开始的字符串 的地址
    while(*t!='\0')
    {
        *s=*t;
        s++;
        t++;
    }
    *s='\0';//最后加个结束符
}