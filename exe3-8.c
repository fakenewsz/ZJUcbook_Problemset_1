#include <stdio.h>

int main(){
    int n=0,cnt=0;
    printf("[1] apple\n""[2] pear\n""[3] orange\n""[4] grape\n""[0] exit\n");
    do{
        scanf("%d",&n);
        if(n!=0){
           switch(n){
               case 1:printf("price = 3.00\n"); break;
               case 2:printf("price = 2.50\n"); break;
               case 3:printf("price = 4.10\n"); break;
               case 4:printf("price = 10.20\n"); break;
               default: printf("price = 0.00\n");
            }
        cnt++;
    }


    }while(cnt<5 && n!=0);


    return 0;
}