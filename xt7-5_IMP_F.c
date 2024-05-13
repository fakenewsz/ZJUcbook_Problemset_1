#include <stdio.h>

int main() {

    int n, i, j, rmax, l;
    int jmin, flag = 1;

    scanf("%d", &n);

    int a[n][n];

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    rmax = 0;
    l = 0;
    jmin = 0;

    if (n == 1) {
        printf("0 0");//只有一个点时，一定是鞍点
    } else {
        for (i = 0; i < n; i++) {
            jmin = i;

            for (l = 0; l < n; l++) {
                if (a[i][rmax] <= a[i][l]) {//数组元素之间比较，若比a[i][rmax]大，则将数组列标赋给rmax
                    rmax = l;
                }
            }
            //在本行最大的元素的那列，，求 那 列最小值,
            //以上找到第i行rmax列,  rmax固定  开始判断(i,rmax)是否为rmax列最小
            //jmin=0，假定列最小是第0行，开始找真正列最小的标号
            for (j = 0; j < n; j++) {            //列最小的行数是jmin
                if (a[jmin][rmax] > a[j][rmax]) {//若此行最大值不是列所在最小值，把小的行标赋给jmin
                    jmin = j;
                    break;
                }
            }
            //如果列最小数据的行数  和  行最大数据的行数不一致 那么就说明不是鞍点
            if (i == jmin) {//如果本行就是 (行最大前提下求出的)列最小的行数jmin
                flag = 0;
                break;
            }
        }


        if (flag == 0) {
            printf("%d %d", i, rmax);
        } else {
            printf("NONE");
        }
    }
    return 0;
}