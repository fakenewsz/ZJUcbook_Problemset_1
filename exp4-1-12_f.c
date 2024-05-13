#include <stdio.h>

int main(){

    int n,t,ret=0,a,b,c,max,min,cnt=0;
    scanf("%d",&n);


    while(ret!=495){
        a=n%10;
        b=n/100;
        c=(n/10)%10;
        if(a>b){t=a;a=b;b=t;}
        if(a>c){t=a;a=c;c=t;}
        if(b>c){t=b;b=c;c=t;}

        min=100*a+10*b+c;
        max=100*c+10*b+a;

        ret=max-min;
        cnt++;
        printf("%d: %d - %d = %d\n",cnt,max,min,ret);

        n=ret;
    }

    return 0;
}
