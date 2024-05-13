#include <stdio.h>

int main(){
    char ch;

    while ((ch=getchar() )!= '\n'){
                    //边界情况直接转。
        if(ch =='z'){
            ch = 'A';
        }else if (ch =='Z'){
            ch ='a';
        }else if((ch>='a'&&ch<='y') ) {
                ch+='A'-'a'+1;
        }else if (ch>='A'&&ch<='Y'){
                ch-=('A'-'a'-1);
            }


        putchar(ch);
    }


    return 0;
}