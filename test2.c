#include <stdio.h>

int main(){
    int a;
    char c;
    do
    {
        scanf("%d",&a);
        getchar();
        scanf("%c",&c);
        printf("a=%d     c=%c\n",a,c);
        /*printf("c=%d/n",c);*/
    }while(c!='N');

    return 0;
}

// scanf%d是读不了缓冲区里的 非数字 字符的， %d遇到了非数字，这行代码什么都不做。缓冲区内容留给下面的代码读取
//scanf 遇到空格、回车 、tab 、非法输入、宽度结束会终止，但是这个使它终止输入的符号，还留在缓冲区里。
//gets(char[])会丢弃使它终止的符号。、