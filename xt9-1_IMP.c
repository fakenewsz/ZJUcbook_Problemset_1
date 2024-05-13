#include <stdio.h>

int main(void){

    int n;
    int temp=0;
    struct time {
        int hour;
        int min;
        int sec;
    }t;


    scanf("%d:%d:%d",&t.hour,&t.min,&t.sec);

    scanf("%d",&n);
    temp=t.sec;
    t.sec +=n;
    if(t.sec >=60){
        t.sec = t.sec-60;
        t.min++;
    }
    if(t.min>=60){
        t.min=t.min -60;
        t.hour ++;
    }
    if(t.hour >=24){
        t.hour=t.hour-24;
        t.min =0;
        t.sec= 0+ 60-temp-n;
    }

    printf("%02d:%02d:%02d\n",t.hour,t.min,t.sec);// 0 分要输出成00 ，用%02d 而不是%2d
    return 0;
}