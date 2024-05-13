/*模拟简单运算器的工作。假设计算器只能进行加减乘除运算，运算数和结果都是整数，四种运算符的优先级相同，按从左到右的顺序计算。

输入格式:
    输入在一行中给出一个四则运算算式，没有空格，且至少有一个操作数。遇等号”=”说明输入结束。

            输出格式:
    在一行中输出算式的运算结果，或者如果除法分母为0或有非法运算符，则输出错误信息“ERROR”。*/


//一开始完全没思路
#include <stdio.h>

int main(){
    char ch;
    int num=0,t,flag=0;
    scanf("%d",&num);
    while((ch=getchar())!='=' && flag==0){
        switch(ch){
            case '+':scanf("%d",&t);num+=t;break;
            case'-':scanf("%d",&t);num-=t;break;
            case'*':scanf("%d",&t);num*=t;break;
            case '/' :scanf("%d",&t);
                    if(t==0){
                        flag=1;
                        break ;
                    }
                    num/=t;break;
            default: flag=1;//处理输入非法字符的情况；
        }

    }
    //输出统一到最后
    if (flag==1){
        printf("ERROR");
    }else{
        printf("%d",num);
    }

    return 0;
}