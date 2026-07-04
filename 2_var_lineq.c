#include<stdio.h>
int main(){
    float a,b,c,p,q,r,x,y;
    printf("\nEnter a,b,c,p,q,r: ");
    scanf("%f %f %f %f %f %f",&a,&b,&c,&p,&q,&r);
    float f=p*b,f1=p*c;
    q=q-f/a;
    r=r-f1/a;
    if(q==0){
        printf("\nNO Solution!!");
    } 
    else{
        y=r/q;
        x=(c-b*y)/a;
    }
    printf("\n Solution for the given equation is X=%f, Y=%f",x,y);
    return 0;
}