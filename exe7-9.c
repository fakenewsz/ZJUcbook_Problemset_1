#include <stdio.h>

int main(){


    int i,year,month,day,sum=0;
    int a[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
    scanf("%d/%d/%d",&year,&month,&day);

    if   (   (year % 4 ==0) && (year %100)||(year%400==0)    ){
        a[2]=29;

    }
    if(month==1){
        printf("%d",day);
    }else{
        for(i=1;i<month;i++){
            sum+= a[i];
        }
        printf("%d",sum+day);
    }


    return 0;
}