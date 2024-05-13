#include <stdio.h>
#define MAXN 20

void CountOff(int n, int m, int out[]);

int main() {
    int out[MAXN], n, m;
    int i;

    scanf("%d %d", &n, &m);
    CountOff(n, m, out);
    for (i = 0; i < n; i++)
        printf("%d ", out[i]);
    printf("\n");

    return 0;
}

void CountOff(int n, int m, int out[]) {

    int i, k = 1, t;
    for (i = 0; i < n; i++) {
        out[i] = 0;
    }
    i = 0;
    t = -1;
    while (k <= n) {//K是出局人数
        t++;                 //t是玩家序号，开局==0,t是out[]的下标。也是一开始玩家的序号
        i++;                 //i作为报的数
        if(out[t]!=0){//若报数到已经out掉的玩家，则跳过
            i--;
        }
        if(i==m){//报到m时，让i=0，使下一个玩家重新从1开始报数
            i=0;
            out[t]=k++;//第k个出局的t号人物装入out 的t下标里
        }
        if(t>=n-1){//到最后一个玩家时，重新从第一个玩家开始报数
            t=-1;
        }

    }
}