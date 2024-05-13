#include <stdio.h>

int main(){
    double fee= 0;
    int vol=0;

    scanf("%d",&vol);

    if(vol>=0){
        if(vol<=50){
            fee=0.53*vol;
        }else{
            fee= 0.58*(vol-50)+50*0.53;
        }
        printf("cost = %.2lf",fee);
    }else{
        printf("Invalid Value!");
    }




    return 0;

}