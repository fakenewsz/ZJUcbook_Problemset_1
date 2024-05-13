#include <stdio.h>

int main(void){

    int n,i,index;


    struct info{
        char name[10];
        double birthday;
        char tel[20];
    };

    scanf("%d",&n);
    struct info inf[n],temp;
    getchar();

    for(i=0;i<n;i++){
        scanf("%s%lf%s",inf[i].name,&inf[i].birthday,inf[i].tel);
        getchar();
    }

    for(i=0;i<n-1;i++){   //排序算法完全不熟练
        index=i;

        for (int j=i+1;j<n;j++){
            if(inf[j].birthday < inf[index].birthday){
                index=j;
            }
        }
        temp=inf[i];            //让换整个人的资料，而不是换生日， 所以temp得是和inf[i]一样的结构
        inf[i]= inf[index];
        inf[index] =temp;
    }

    for(i=0;i<n;i++){
        printf("%s %.0lf %s\n",inf[i].name,inf[i].birthday,inf[i].tel);
    }


    return 0;
}