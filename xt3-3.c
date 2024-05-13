#include <stdio.h>
int main(){
    double fee=0,dis;
    int t;
    scanf("%lf %d",&dis,&t);
    if(dis<=3){
        fee=10;
    }else {
        if(dis<=10){
            fee=10+(dis-3.0)*2.0;
        }else{
            fee=10+(dis-10)*3.0+(10-3.0)*2.0;
        }
    }


    if(t<5){
    }else {
        fee += (t/5)*2.0;
    }

    printf("%.0lf",fee);

    return 0;
}