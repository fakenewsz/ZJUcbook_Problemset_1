/*
将一笔零钱换成5分、2分和1分的硬币，要求每种硬币至少有一枚，有几种不同的换法？

输入格式:
    输入在一行中给出待换的零钱数额x∈(8,100)。

    输出格式:
    要求按5分、2分和1分硬币的数量依次从大到小的顺序，输出各种换法。每行输出一种换法，
    格式为：“fen5:5分硬币数量, fen2:2分硬币数量, fen1:1分硬币数量, total:硬币总数量”。最后一行输出“count = 换法个数”。

*/






//贪心算法 经典问题之找硬币
#include <stdio.h>

int main(){
    int c5,c2,c1,ct,money,cnt;

    scanf("%d",&money);

    cnt=c5=c2=c1=ct=0;
//怎么知道是最优解（硬币数最少),优先考虑大面值硬币，就使得多重循环的结果是硬币数最少的最优解
    for(c5 = money/5;(c5>=0);c5--){
        for(c2= (money- 5*c5)/2; (c2>=0);c2--){
            for(c1= money-5*c5-2*c2;(c1>=0) ;c1--){
                if(money== c1+2*c2+5*c5){
                    if(c1!=0 && c2!=0 && c5!=0){     //如果只要一个组合，那每重循环的判断条件+个flag，找到一个就使flag=0
                        ct=c1+c2+c5;
                        printf("fen5:%d, fen2:%d, fen1:%d, total:%d\n",c5,c2,c1,ct);
                        cnt++;
                    }
                }
            }
        }
    }

    printf("count = %d\n",cnt);

    return 0;
}