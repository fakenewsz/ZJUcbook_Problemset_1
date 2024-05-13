#include <stdio.h>

int main(void){
    int i,n,max,min;


    struct book{
        char name[30];
        double price;

    } ;
    scanf("%d",&n);//输入完n 换行才输入名字， 此时缓存区有个\n 需要getchar清除
    getchar();

    struct book b[n];
    //b[i].name前不用&是因为name是数组，用头地址来代表它
    for( i=0;i<n;i++){
        scanf("%[^\n]%lf",b[i].name,&b[i].price);//用%[^\n]来输入带空格的字符串
        getchar();
    }

    max=min=0;

    for(i=0;i<n;i++){
        if(b[max].price <b[i].price){
            max=i;
        }
        if(b[min].price >b[i].price){
            min=i;
        }

    }

    printf("%.2lf, %s\n%.2lf, %s\n",b[max].price,b[max].name,b[min].price,b[min].name);

    return 0;
}