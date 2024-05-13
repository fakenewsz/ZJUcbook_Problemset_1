#include <stdio.h>
#define MAXS 15

void StringCount( char s[] );
void ReadString( char s[] ); /* 由裁判实现，略去不表 */

int main()
{
    char s[MAXS];

    ReadString(s);
    StringCount(s);

    return 0;
}

void StringCount( char s[] ){
    char c;
    int i=0,length=0;
    int letter=0,blank=0,digit=0,other=0;

    while(s[i]!='\0'){ //实际输入【字符串】数组的数字数量不一定占满数组，最后会有个'\0'
        length++;
        i++;
    }

    for(i=0;i<length;i++){
        if ( (s[i] >='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z') ){
            letter++;
        }else if(s[i] >='0'&&s[i]<='9'){
            digit++;
        }else if(s[i]==' '||s[i]=='\n'){
            blank++;
        }else{
            other++;
        }

    }
    printf("letter = %d, blank = %d, digit = %d, other = %d",letter,blank,digit,other);

}