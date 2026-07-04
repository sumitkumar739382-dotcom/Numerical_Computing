/*Qudratic equation using false position method*/
#include<stdio.h>
#include<math.h>
int main(){
    float x0,x1,x2,f0,f1,f2,e;
    int n,i;
    printf("Enter x0,x1,error tolerance e,and mx iterations n: ");
    scanf("%f %f %f %d",&x0,&x1,&e,&n);
    f0=(x0*x0)-25;
    f1=(x1*x1)-25;
    if (f0 * f1 > 0) {
        printf("\nStarting values unsuitable! f(x0) and f(x1) must have opposite signs.");
        return 0;
    }
    for(i=0;i<n;i++){
        x2=(x0*f1-x1*f0)/(f1-f0);
        f2=(x2*x2)-25;
        if(fabs(f2)<=e){
            printf("\nConevrgent Solution, %f,%f",x2,f2);
        }
        if(f2*f0<0){
            x1=x2;
            f1=f2;
        }
        else{
            x0=x2;
            f0=f2;
        }
    }
    printf("\nDoes not converge in %d iterations",n);
    printf("\n x2=%f,f2=%f",x2,f2);
}