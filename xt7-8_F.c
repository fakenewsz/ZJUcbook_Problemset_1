#include<stdio.h>
int main()
{
    char ch = 0;
    int count = 0;//十六进制字符数量
    int flag = 1;//正负
    int sum = 0;//十进制
    while ((ch = getchar()) != '#')//看不懂干嘛乘16.第二轮sum再乘16岂不是变几百去了
                                    //总共输入的是1个16进制数， 有可能有好几位，前面输入的是16^n,n取决于它在哪一位
    {
        if (ch >= '0' && ch <= '9')
        {
            sum = sum * 16 + (ch - '0');
        }
        else if (ch >= 'a' && ch <= 'f')
        {
            sum = sum * 16 + (ch - 'a' + 10);
        }
        else if (ch >= 'A' && ch <= 'F')
        {
            sum = sum * 16 + (ch - 'A' + 10);
        }
        else if (sum == 0 && ch == '-' && flag == 1)
        {
            flag = -flag;
        }
    }
    printf("%d", sum * flag);
    return 0;
}