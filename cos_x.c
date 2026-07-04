#include<stdio.h>
int main(){
    int x,n,i;
    float s,term;
    printf("Enter x (cos(x)) and n: ");
    scanf("%d %d",&x,&n);
    s=1;
    term=1;
    for(i=1;i<n;i++){
        term=(-x*x)*term/(2*i*(2*i-1));
        s+=term;
    }
    printf("Sum of cos(%d) upto %d terms is: %f",x,n,s);
    return 0;
}