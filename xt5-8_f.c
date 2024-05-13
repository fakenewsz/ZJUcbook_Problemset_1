#include <stdio.h>

void hollowPyramid ( int n );

int main()
{
    int n;

    scanf("%d", &n);
    hollowPyramid ( n );

    return 0;
}

void hollowPyramid( int n ){
    int i,j,k,num;

    for(i=1;i<n;i++){              //行号和数字号，数字数量单独算,最后一行单独算
        for(j=1;j<=n-i;j++){
            printf(" ");
        }
        if(i>1){
            for(num=2;num>0;num--){
                printf("%d",i);
                for(k=2*i-1;k>2&&num==2;k--){  //这里只在n==2的时候，才输出空格，即只输出中间
                    printf(" ");
                }
            }

        }else{
            printf("1");
        }

        putchar('\n');

    }
    for(i=2*n-1;i>0;i--){
        printf("%d",n);
    }
//不知道为什么n==5 n==9过不了测试，目测结果都是一样..   每行末尾都输出了与中间一样数量的空格
    // PAT的测试用例会提示空格，好用
}