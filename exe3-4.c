#include <stdio.h>

int main() {

    int l=0,b=0,d=0,o=0;
    int n,i;
    int c;



    for(i=1; i<=10;i++){
        c=getchar();          // 有输入空格的时候，不要scanf，getchar好用。
        if(c>='A'&&c<='Z'||c>='a'&&c<='z'){      //Z到 a之间有其他字符， 字母判断要分两段
            l++;
        } else if (c>='0' && c<='9'){
            d++;
        }else if (c ==' '||c=='\n'){
            b++;
        }
        else{
            o++;
        }
    }
    printf("letter = %d, blank = %d, digit = %d, other = %d",l,b,d,o);

    return 0;
}
