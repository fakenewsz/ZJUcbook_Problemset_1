#include <stdio.h>
#include <string.h>

#define MAXN 20
typedef enum {false, true} bool;

bool palindrome( char *s );

int main()
{
    char s[MAXN];

    scanf("%s", s);
    if ( palindrome(s)==true )
        printf("Yes\n");
    else
        printf("No\n");
    printf("%s\n", s);

    return 0;
}

bool palindrome( char *s ){

    int i=0,cnt=0;
    int len;
    len = strlen(s);

    while( i<(len-i-1)){
        if(s[i]!=s[len-i-1] ){
            break ;
        }

        i++;

    }
    if(i>=(len-i-1)){
        return true;
    }else{
        return false;
    }

}