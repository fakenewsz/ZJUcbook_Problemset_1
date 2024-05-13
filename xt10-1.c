#include <stdio.h>
#include <math.h>

int search( int n );

int main()
{
    int number;

    scanf("%d",&number);
    printf("count=%d\n",search(number));

    return 0;
}


int search( int n ){

    int cnt=0;
    int i,j=0,a,b,c;
    int arr[21];

    for(i=11;pow(i,2)<n;i++){
        arr[j++]=pow(i,2);
    }

    for(i=0;i<j;i++){
        a= arr[i] %10;
        b= arr[i]/100;
        c=(arr[i]/10)%10;
        if((a==b)||(b==c)||(a==c)){
            cnt++;
        }

    }
    return cnt;
}
//边界情况总结：n是一个三位数的正整数（最高位数字非0）