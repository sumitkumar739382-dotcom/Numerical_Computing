#include<stdio.h>
int main(){
    int x,n,i;
    float s,term;
    printf("Enter x (sin(x)) and n: ");
    scanf("%d %d",&x,&n);
    s=x;
    term=x;
    for(i=1;i<n;i++){
        term=(-x*x)*term/(2*i*(2*i+1));
        s+=term;
    }
    printf("Sum of sin(%d) upto %d terms is: %f",x,n,s);
    return 0;
}