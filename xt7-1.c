#include <stdio.h>

int main() {

    int n,j,index,t=0,i;
    int a[10];

    scanf("%d",&n);

   for( i=0;i<n;i++){
       scanf("%d",&a[i]);

   }
   index=0;
   for(j=0;j<n-1;j++){    //n-1是因为最后一个不需要排序
       index=j;
       for(i=j+1;i<n;i++){  //j+1是因为前面已经排过了
           if(a[i]>a[index]){
               index=i;
           }
       }
        t=a[index];
        a[index]=a[j];
        a[j]=t;

   }
    for(i=0;i<n;i++){
        if(i!=n-1){
           printf("%d ",a[i]);
        }else{
           printf("%d",a[i]);
        }
    }

    return 0;
}