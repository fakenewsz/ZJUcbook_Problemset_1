#include <stdio.h>

int main(){

    int n,i,x,j,t;
    int index;

    scanf("%d",&n);
    if(n==0){
        scanf("%d",&x);
        printf("%d ",x);
    }else{
        int a[n+1];

        for(i=0;i<n;i++){
            scanf("%d",&a[i]);
        }

        scanf("%d",&x);

        for(i=0;i<n;i++){
            for (i=0; i<n; i++){
                if (x < a[i]){        // 找到 x第一次的位置，然后x和 a[i]依次往后推
                    t = a[i];         //每次都用 a[i]表示 x的值并且输出, x就等于被替换的 a[i]
                    a[i] = x;
                    x = t;
                }
                printf("%d ", a[i]);
            }
            printf("%d ",x);

        }

    }


    return 0;
}
