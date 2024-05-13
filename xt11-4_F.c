#include <stdio.h>
#include <string.h>

#define MAXS 10

char *str_cat( char *s, char *t );

int main()
{
    char *p;
    char str1[MAXS+MAXS] = {'\0'}, str2[MAXS] = {'\0'};

    scanf("%s%s", str1, str2);
    p = str_cat(str1, str2);
    printf("%s\n%s\n", p, str1);

    return 0;
}

char *str_cat( char *s, char *t ){
    int lens= strlen(s);
    int lent= strlen(t);
    int i,j;

    for(i=0,j=lens;i<lent;i++,j++){
        s[j]=t[i];
    }
    s[lens+lent]=0;


    return s;


}