#include<stdio.h>
int main(){
    int i,n;
    float x,s,term;
    printf("\nEnter x (log(1+x),-1<x<=1) and n: ");
    scanf("%f %d",&x,&n);
    s=x;
    term=x;
    for(i=1;i<=n;i++){
        term=(-x)*i*term/(i+1);
        s+=term;
    }
    printf("\nSum of log(1+%f) upto %d terms is: %f",x,n,s);
}