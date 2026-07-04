/*Qudratic equation using bisection method*/
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
    float x0,x1,e,y0,y1,x2,y2;
    int i;
    printf("Enter x0,x1,e: ");
    scanf("%f %f %f",&x0,&x1,&e);
    y0=((x0*x0)-25);
    y1=((x1*x1)-25);
    i=0;
    if(y0*y1>0){    
        printf("\nStarting values unsuitable!!");
        return 0;
    }
    while(fabs((x1-x0))/x1>e){
        x2=(x0+x1)/2;
        y2=((x2*x2)-25);
        i++;
        if(y0*y2>0){
            x0=x2;
        }
        else{
             x1=x2;
        }        
    }
    printf("\nSolution converges to a root");
    printf("\nNo. of iterations: %d",i);
    printf("\nRoot: %f,Function value: %f",x2,y2);
}