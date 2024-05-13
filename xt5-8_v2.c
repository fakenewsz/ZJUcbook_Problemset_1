
#include <stdio.h>
void hollowPyramid ( int n );

int main()
{
    int n;
    scanf("%d", &n);
    hollowPyramid ( n );

    return 0;
}

void hollowPyramid ( int n )
{
    int i,j;

    for(i=1;i<=n;i++){//i为行数
        for(j=1;j<=n-1+i;j++){//j为第i行中的第几个 (j的结束条件是本行非空格的后一个数字)
            if(i==n){
                printf("%d",i);
            }else if(i<n){
                if((j==n+1-i)||(j==n-1+i)){
                    printf("%d",i);
                }else{
                    printf(" ");
                }
            }
        }
        printf("\n");
    }
}
