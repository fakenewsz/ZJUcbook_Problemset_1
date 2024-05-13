#include <stdio.h>

//多个矩阵怎么处理啊？
int main() {
    int T, n,i,j,k, num, max = 0,flag =0;


    scanf("%d",&T);


    for(k=0;k<T;k++) {
        scanf("%d",&n);
        int a[n][n] ;

        flag =0;
        for (i = 0; i < n; i++) {
            for (j = 0; j < n; j++){
                scanf("%d", &a[i][j]);
                if (a[i][j] != 0 && i > j) {  //下三角区域有一个不是0，就可以肯定不是上三角矩阵
                    flag = 1;
                }
            }
        }
        if(flag==1){
            printf("NO\n");
        }else{
            printf("YES\n");
        }
    }

    return 0;
}