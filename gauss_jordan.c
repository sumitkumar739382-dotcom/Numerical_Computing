#include <stdio.h>
#include <math.h>
#define N 10

int main() {
    int i, j, k, n;
    double a[N][2*N], ratio;
    printf("Enter n: "); scanf("%d", &n);
    printf("Enter matrix A:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) scanf("%lf", &a[i][j]);
        for (j = 0; j < n; j++) a[i][n+j] = (i == j) ? 1.0 : 0.0;
    }
    for (k = 0; k < n; k++) {
        ratio = a[k][k];
        for (j = 0; j < 2*n; j++) a[k][j] /= ratio;
        for (i = 0; i < n; i++) {
            if (i == k) continue;
            ratio = a[i][k];
            for (j = 0; j < 2*n; j++) a[i][j] -= ratio * a[k][j];
        }
    }
    printf("Inverse Matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) printf("%8.4lf ", a[i][n+j]);
        printf("\n");
    }
    return 0;
}
