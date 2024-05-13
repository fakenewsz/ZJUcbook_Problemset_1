#include <stdio.h>

#define MAXS 10

char *match( char *s, char ch1, char ch2 );

int main()
{
    char str[MAXS], ch_start, ch_end, *p;

    scanf("%s\n", str);
    scanf("%c %c", &ch_start, &ch_end);
    p = match(str, ch_start, ch_end);
    printf("%s\n", p);

    return 0;
}

/*
char *match( char *s, char ch1, char ch2 ){

    int i,left=-1,right=-1,cnt=0;
    int n=0;
    for(i=0;s[i]!='\0';i++){
         if(s[i]==ch1 &&cnt==0){
             left=i;
            cnt++;
         }
         if(s[i]==ch2){
             right=i;
         }
         n++;
    }
    if(left==-1){
         return NULL;
    }
    if(right==-1){
         right=n;
    }

    for(i=left;i<=right;i++){
         printf("%c",*(s+i));
    }
    putchar('\n');
    return &s[left];

}*/
//搞不来，抄抄别人的,自己代码case3 CLion和 PAT输出不一样
char *match( char *s, char ch1, char ch2 )
{
    int flag = 0; //判断点，判断ch1是不是第一次出现
    char *p = NULL; //指针p保存ch1第一次出现的地址

    while (*s != '\0')
    {
        if(*s == ch1 && flag == 0) //判断*s是否等于ch1，并且ch1是否是第一次出现
        {
            flag = 1;
            p = s;
        }
        if (flag!=0){
            printf("%c", *s);
        }
        if (*s == ch2 && flag!=0) {
            break; //如果*s等于ch2并且ch1出现过了才退出
        }
        s++;
    }
    if (flag == 0){
        p = s; //如果ch1没出现过，把字符串结束标识\0的地址给p，因为主程序里的p是%s打印的 NULL代表指针
                //输出\0 就是输出空行,此时经过while循环s已经到了'\0'
    }
    printf("\n");

    return p;
}







