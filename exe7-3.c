#include <stdio.h>
#define MAXN 10
int main() {
    int i = 0, t = 0, n = 0;
    int list[MAXN];
    scanf("%d", &n);


    for (i = 0; i < n; i++) {
        scanf("%d", &list[i]);
    }

    for(i=0;i<(n/2);i++){
        t=list[i];
        list[i]=list[n-1-i];
        list[n-1-i]=t;
    }

    for(i=0;i<n;i++){
        printf("%d",list[i]);
        if(i<n-1){                  //控制头尾都没空格
            putchar(' ');
        }
    }


    return 0;
}