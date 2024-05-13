#include <stdio.h>
#define MAXS 30

char *search(char *s, char *t);
void ReadString(char s[]); /* 裁判提供，细节不表 */

int main() {
    char s[MAXS], t[MAXS], *pos;

    ReadString(s);
    ReadString(t);
    pos = search(s, t);
    if (pos != NULL)
        printf("%d\n", pos - s);
    else
        printf("-1\n");

    return 0;
}
#include <string.h>
char *search(char *s, char *t) {

    int i, j,k,n, cnt = 0;//t的长度不定， 不知道咋比了

    for(n=0;*(t+n)!='\0';n++);//统计t的字符数
    
    for (i = 0;*(s+i)!='\0'; i++,cnt=0) {//一开始少了个cnt=0 ，如果出现第一个小段符合t 的前半，第二个小段符合t的后半，
                                         // 就会输出错误结果
        if (*(s + i) == *t) {
            for(j=i,k=0;*(s+j)==*(t+k);j++,k++    ){
                cnt++;//cnt代表成功匹配的字符数量
            }
        }  
        if(cnt>=n){
            return s+i;
        }

    }
    return NULL;
}