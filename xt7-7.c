#include <stdio.h>

int main(){

    char ch;


    while ((ch=getchar())!='\n'){
        if(ch>='A'&&ch<='M'){
            ch= ch+2*(77-ch)+1;
   /*         printf("%d\n",ch);*/

        }else if(ch>'M'&&ch<='Z'){
            ch= ch+2*(77-ch)+1;
            /*printf("%d\n",ch);*/

        }
            putchar(ch);

    }

    return 0;
}