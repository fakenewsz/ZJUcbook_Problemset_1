#include <stdio.h>
#include <math.h>

int prime( int p );
int PrimeSum( int m, int n );

int main()
{
    int m, n, p;

    scanf("%d %d", &m, &n);
    printf("Sum of ( ");
    for( p=m; p<=n; p++ ) {
        if( prime(p) != 0 )
            printf("%d ", p);
    }
    printf(") = %d\n", PrimeSum(m, n));

    return 0;
}
int prime( int p ){
    int i,ret=0,flag=0;
    int limit = sqrt(p);

    if(p<=0 || p==1){
        ret =0;
    }else if(p==2){
        ret=1;
    }else{
        for(i=2;i<=limit && flag==0;i++){
            if(p%i == 0){
                flag =1;
            }
        }

        if(i>limit && flag==0){
            ret = 1;
        }

    }
    return ret;
}
int PrimeSum( int m, int n ){
    int sum=0;
    int i;
    for(i=m;i<=n;i++){
        if(prime(i)!=0){
            sum+=i;
        }
    }
    return sum;//一开始PrimeSum没有return，怎么都算不对
}