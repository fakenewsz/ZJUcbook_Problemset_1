#include <stdio.h>

int main(){

    int u=-1, l=-1,i;
    int f=0;
    double c=0;

    scanf("%d %d",&l,&u);

    if(!(l<=u && l>0 && u<=100)){
        printf("Invalid.");
        goto out;
    }
    printf("fahr celsius\n");
    for(f=l;f<=u;f+=2){
        c=5*(f-32)/9.0;

        printf("%d%6.1lf\n",f,c);

    }


out:
    return 0;

}