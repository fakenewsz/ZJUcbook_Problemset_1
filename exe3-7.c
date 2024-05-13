#include <stdio.h>

int main(void) {

    int n;
    char c = 'a';
    scanf("%d",&n);

    if(n>=90){
        c = 'A';
    }else if(n >=80){
        c = 'B';
    }else if(n >=70){
        c = 'C';
    }else if(n >=60){
        c = 'D';
    }else{
        c = 'E';
    }
    printf("%c",c);
    return 0;
}
