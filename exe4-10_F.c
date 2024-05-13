/*
本题要求编写程序，找出给定一系列整数中的最小值。

输入格式：
输入在一行中首先给出一个正整数n，之后是n个整数，其间以空格分隔。

        输出格式：
                在一行中按照“min = 最小值”的格式输出n个整数中的最小值。
*/

#include <stdio.h>


int main(){

    int min,n,cnt=0,i;

    scanf("%d ",&n);
    scanf("%d",&i);//先把第一个当做最小值
    min =i;
    do{
        scanf("%d",&i);

        if(i<=n && i<=min){
            min=i;
        }

        cnt++;
    }while(cnt<n-1);

    printf("min = %d",min);

    return 0;
}