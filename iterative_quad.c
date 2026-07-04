/*Quadratic Equation using iterative method*/
#include<stdio.h>
int main(){
    float x,xmin,xmax,y,dx;
    printf("Enter x1(lower bound) and x2(upper bound) and dx: ");
    scanf("%f %f %f",&xmin,&xmax,&dx);
    x=xmin;
    printf("\n   X              f(X)");
    while(x<=xmax){
        y=((x*x*x)-(2.5*x*x)-(2.46*x)+3.96);
        printf("\n%f  %f",x,y);
        x+=dx;
    }
}