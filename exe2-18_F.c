#include <stdio.h>


double fact(double a) {
    double sum = 1;
    int i;
    for (i = 1; i <= a; i++) {
        sum *= i;
    }
    return sum;
}
int main() {
    double m,ret = 0;
    double  n;
    scanf("%lf %lf", &m, &n);

    if (m <= n) {
        ret = fact(n) / (fact(m) * fact(n-m));
        printf("result = %.0lf", ret);
    }
    return 0;
}

//？？一开始把N 和M的类型都定义成int ，造成m==1/2 n == x.5时，编译器四舍五入把M进一,实际上在阶乘算法中 1.5!==1!.
// 错误点：m不能是int ， 相应地，sum=m!也不能是int。 因为 int 能表示的数字数量有限。