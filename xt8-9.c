#include <stdio.h>
#define MAXS 15

void StringCount( char *s );
void ReadString( char *s ); /* 由裁判实现，略去不表 */

int main()
{
    char s[MAXS];

    ReadString(s);
    StringCount(s);

    return 0;
}

void StringCount( char *s ){

    int uc,lc,blank,digit,other;

    uc=lc=blank=digit=other=0;

    while(*s!='\0'){
        if(*s>='A'&& *s<='Z'){
            uc++;

        }else if (*s >='a'&& *s<='z'){
            lc++;
        }else if(*s >='0'&& *s<='9'){
            digit++;
        }else if(*s ==' '){
            blank++;
        }else {
            other++;
        }
        *s++;
    }
    printf("%d %d %d %d %d",uc,lc,blank,digit,other);

}