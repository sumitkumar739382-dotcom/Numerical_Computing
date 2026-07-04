#include<stdio.h>
int main(){
    int n,r;
    printf("\nEnter order and root of polynomial: ");
    scanf("%d %d",&n,&r);
    int a[n+1],i,b[n+1];
    for(i=0;i<=n;i++){
        printf("\nEnter a[%d]: ",i);
        scanf("%d",&a[i]);
    }
    b[n-1]=a[n];
    for(i=1;i<n;i++){
        b[n-(i+1)]=a[n-i]+r*b[n-i];
    }
    for(i=0;i<n;i++){
        printf("\nb[%d]=%d",i,b[i]);
    }

}