#include <stdio.h>

int main(){

    char ch;
    int cnt=0;

    while ((ch=getchar())!='\n'){
        if(!((ch=='A')||(ch=='E')||(ch=='I')||(ch=='O')||(ch=='U'))&&ch>'A'&&ch<='Z'){
            cnt++;

        }
    }
    printf("%d",cnt);

    return 0;
}