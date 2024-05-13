#include <stdio.h>
#include <string.h>

#define MAXS 80

int getindex( char *s );

int main()
{
    int n;
    char s[MAXS];

    scanf("%s", s);
    n = getindex(s);
    if ( n==-1 ) printf("wrong input!\n");
    else printf("%d\n", n);

    return 0;
}

int getindex( char *s ){//字符串数组只能char *
    char *week[7]={"Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday",};
    int i,flag=0;

    for(i=0;i<7;i++) {
        if(strcmp(s,week[i])==0){
            return i;
        }
    }
        return -1;
}