#include <stdio.h>

char *getmonth( int n );

int main()
{
    int n;
    char *s;

    scanf("%d", &n);
    s = getmonth(n);
    if ( s==NULL ) printf("wrong input!\n");
    else printf("%s\n", s);

    return 0;
}

char *getmonth( int n ){//没把存储月份名字的字符串传进来怎么做
    char *mon[13]={"0","January","February","March","April","May","June","July","August","September","October","November","December"};
    if(n>=1 &&n<=12){
        return mon[n];

    }else{
        return NULL;
    }


}