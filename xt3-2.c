#include <stdio.h>


int main(){
    double sum=0;
    double per,s1,s2;



    scanf("%lf %lf",&s1,&s2);
    per= ((s1-s2)/s2)*100.0;

    if(per<10){
        printf("OK");
    }else if(per<50){
        printf("Exceed %.0lf%%. Ticket 200",per);// to output %, use %%
    }else{
        printf("Exceed %.0lf%%. License Revoked",per);
    }
    return 0;

}