#include <stdio.h>
#define MAXN 10
int main() {
    int a[MAXN][MAXN];
    int i,j,n,sum=0;

    scanf("%d",&n);

    for(j=0;j<n;j++){
        for(i=0;i<n;i++){
            scanf("%d",&a[i][j]);
        }
    }

    for(i=0;i<n-1;i++){
        for(j=0;j<n-1;j++){
            if( i+j!=n-1 ){
                sum+=a[i][j];
            }

        }
    }
    printf("%d",sum);


    return 0;
}