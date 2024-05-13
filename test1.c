#include <stdio.h>
#include <string.h>

int main(){
    double n;
    char word[3];
    char word2[3];
    char* word4[3]={"aaaa","bbbb","cccc"};
   /* gets(word);
    gets(word2);*/
    n= strlen(word4);
 /*   scanf("%s",word);

    scanf("%s",word2);

    printf("word1===%s\n",word);
    printf("word2===%s\n",word2);
    printf("9/5=%d\n",9/5);*/
    printf("str of word4 = %lf\n",n);
    return 0;

}
// 8个character 的数组最多接受7个字符，最后还有个/0
//输入 hello wold
//怎么就输入ld
//          world   了？ word2 不受长度限制？ 课程里说涉及到变量在内存里的存储，没懂
