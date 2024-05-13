#include <stdio.h>

#define MAXN 10

int even(int n);
int OddSum(int List[], int N);


int main() {
    int List[MAXN], N, i;

    scanf("%d", &N);
    printf("Sum of ( ");
    for (i = 0; i < N; i++) {
        scanf("%d", &List[i]);
        if (even(List[i]) == 0)
            printf("%d ", List[i]);
    }
    printf(") = %d\n", OddSum(List, N));

    return 0;
}

int even(int n) {
    int ret;
    if(n%2!=0){  // 用!=0  而不是==1,因为有可能输入负数。
        ret =0;
    }else{
        ret=1;
    }
    return ret;
}
//oddsum怎么只加list内的奇数是个问题。   再调用一次even
int OddSum(int List[], int N) {
    int sum = 0;
    int i;
    for (i = 0; i < N; i++) {
        if(even(List[i]) == 0){
            sum += List[i];
        }

    }
    return sum;
}