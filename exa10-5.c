//<<C语言 >>P248汉诺塔问题

#include <stdio.h>
static int cnt=1;
void hanoi(int n, char a,char b,char c);
int main(){
    int n;

    scanf("%d",&n);
    hanoi(n,'a','b','c');
    printf("Steps:%d",cnt);
    return 0;

}

void hanoi(int n, char a, char b, char c){

    printf("Step:%d\n",cnt++);
    if(n==1){
        printf("%c-->%c\n",a,b);
    }else{
        hanoi(n-1,a,c,b);
        printf("%c-->%c\n",a,b);
        hanoi(n-1,c,b,a);

    }


}