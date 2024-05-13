#include <stdio.h>

/*
int main() {

    int n,temp, i,j,maxtime;

    int a[1000];

    scanf("%d",&n);

    for(i=0;i<n;i++){
        scanf("%d",&a[i]);   //这里说N个整数，说明要用整形输入
    }
    for(i=0;i<n;i++){           //对每个数字判断
                                // 这里判断每个整数含不含某数字，却要用 字符型才能判断，何解？强制类型转换？
                                //(char)123;?但是这样 N个数字就需要N个新数组。。。不对劲

        for(j=i;)
    }
    return 0;
}*/
int main() {
    int n, i, num, max = 0;
    int a[10]={0};//这里要指定元素是0，或者用静态数组static int a[10]

    scanf("%d", &n);

    for (i = 0; i < n; i++) {

        scanf("%d ", &num);
        if(num==0 ){   // n==1  num==0的情况特殊处理
            a[0]++;
        }
            while (num > 0) {//拿数组的索引当做 0~9整数，索引代表的数字当做这个整数出现的次数
                a[num % 10]++;
                num /= 10;
        }
    }

    for (i = 0; i < 10; i++) {
        if (max < a[i]) {
            max = a[i];
        }
    }
    printf("%d:", max);

    for (i = 0; i < 10; i++) {
        if (max == a[i]) {
            printf(" %d",i);
        }
    }

    return 0;
}