#include <stdio.h>

int main(){

    int n,i,j,t;
    int index;

    scanf("%d",&n);
    int a[n];

    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    index=0;
    t=0;

    for(i=0;i<n-1;i++){
        index=i;
        for(j=i+1;j<n;j++){
            if(a[index]<a[j]){
                index=j;
            }
        }
        t=a[index];
        a[index]=a[i];
        a[i]=t;

    }

    for(i=0;i<n-1;i++){
        printf("%d ",a[i]);
    }
    printf("%d",a[i]);

    return 0;
}
