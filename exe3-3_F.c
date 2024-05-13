#include <stdio.h>

int main() {

    int n=0,cnt=0,i,a;
    double aver = 0,sum=0;

    scanf("%d",&n);

    for(i=1;i<=n;i++){
        scanf("%d",&a);
        sum+=a;
        if(a>=60){
            cnt++;
        }
    }
    if(!n){
        aver =0;
    }else{
    aver =sum/n; //有分数注意分母为0 的边界情况要特殊处理
    }

    printf("average = %.1lf\n",aver);
    printf("count = %d\n",cnt);


    return 0;
}
