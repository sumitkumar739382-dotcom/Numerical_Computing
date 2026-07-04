/*Langrange Interpolation*/
#include<stdio.h>
int main(){
    int i,j,n;
    float x1,sum,prodfn;
    printf("Enter x and n :");
    scanf("%f %d",&x1,&n);
    float x[n+1],f[n+1];
    for(i=1;i<=n;i++){
        printf("\nEnter x[%d],f[%d]: ",i,i);
        scanf("%f %f",&x[i],&f[i]);
    }
    sum=0;
    for(i=1;i<=n;i++){
        prodfn=1;
        for(j=1;j<=n;j++){
            if(j!=i){
                prodfn*=(x1-x[j])/(x[i]-x[j]);
            }
        }
        sum+=f[i]*prodfn;
    }
    printf("\nx= %f and f(%f)=%f",x1,x1,sum);
    return 0;
}