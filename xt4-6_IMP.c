/*
水仙花数是指一个N位正整数（N≥3），它的每个位上的数字的N次幂之和等于它本身。例如：153=1^3+5^3+3^3
 。 本题要求编写程序,计算所有N位水仙花数。

                输入格式:
    输入在一行中给出一个正整数N（3≤N≤7）。

            输出格式:
    按递增顺序输出所有N位水仙花数，每个数字占一行。
*/




//水仙花数

//先切最右边每位，开n方，再加起来。 和原来的数对比是否相等
#include <stdio.h>
#include <math.h>


double mypow(int a,int n){
    double ret=1;
    int i;
    for(i=1;i<=n;i++){
        ret*=a;
    }
    return ret;
}
int main(){

    int n,i,j,a=0,cnt=0;
    double min,max,sum=0;

    scanf("%d",&n);
//怎么描述这个n位数字
//  min<=number <max

    min=pow(10,n-1);
    max=pow(10,n);

    for(i=(int)min;i<max;i++){//外层循环 遍历每个数字i
        j=i;
        sum=0;
        while(j!=0){
            a= j%10;
            sum += mypow(a,n); //自己写pow节省时间，不然超时
            j=j/10;
            }
            //算出i这个数字 每位n次方的值sum
        if(i== sum &&(cnt<5)){
         printf("%.0lf\n",sum);
         cnt++;
        }
    }


    return 0;
}
