#include <stdio.h>
#include <math.h>
#define MAXN 20
int main() {
    int i, j, n, iter, maxit;
    double a[MAXN][MAXN+1], x[MAXN], temp, sum, big, relerr, e;
    printf("Enter n: ");
    scanf("%d", &n);
    printf("Enter augmented matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j <= n; j++) {
            scanf("%lf", &a[i][j]);
        }
    }
    printf("Enter tolerance and max_iter: ");
    scanf("%lf %d", &e, &maxit);
    for (i = 0; i < n; i++) {
        x[i] = 0.0;
    }
    for (iter = 1; iter <= maxit; iter++) {
        big = 0;
        for (i = 0; i < n; i++) {
            sum = 0;
            for (j = 0; j < n; j++) {
                if (j != i) {
                    sum += a[i][j] * x[j];
                }
            }
            temp = (a[i][n] - sum) / a[i][i];
            relerr = fabs((x[i] - temp) / (temp + 1e-15));
            if (relerr > big) {
                big = relerr;
            }
            x[i] = temp;
        }
        printf("Iter %d: ", iter);
        for (i = 0; i < n; i++) {
            printf("x[%d]=%.5lf  ", i + 1, x[i]);
        }
        printf("\n");
        if (big <= e) {
            printf("Converged.\n");
            return 0;
        }
    }
    printf("Does not converge in %d iterations\n", maxit);
    return 0;
}