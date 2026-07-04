#include <stdio.h>
#define N 10
int main() {
    int n, i, j, k;
    float a[N][N+1], x[N], factor, sum;
    printf("Enter number of variables: ");
    scanf("%d", &n);
    printf("Enter augmented matrix:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j <= n; j++) {
            scanf("%f", &a[i][j]);
        }
    }
    for(k = 0; k < n-1; k++) {          
        for(i = k+1; i < n; i++) {                 
            factor = a[i][k] / a[k][k];
            for(j = k; j <= n; j++) {  
                a[i][j] = a[i][j] - factor * a[k][j];
            }
        }
    }
    x[n-1] = a[n-1][n] / a[n-1][n-1];
    for(i = n-2; i >= 0; i--) {
        sum = 0;
        for(j = i+1; j < n; j++) {
            sum += a[i][j] * x[j];
        }
        x[i] = (a[i][n] - sum) / a[i][i];
    }
    printf("\nSolution:\n");
    for(i = 0; i < n; i++) {
        printf("x%d = %.3f\n", i+1, x[i]);
    }
    return 0;
}
