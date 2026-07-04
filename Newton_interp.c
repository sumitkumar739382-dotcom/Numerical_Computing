#include <stdio.h>

int main() {
    int i, j, n;
    double x[20], f[20][20], xval, h, u, term, result;
    printf("Enter number of data points n: "); scanf("%d", &n);
    printf("Enter x values: ");
    for (i = 0; i < n; i++) scanf("%lf", &x[i]);
    printf("Enter f(x) values: ");
    for (i = 0; i < n; i++) scanf("%lf", &f[i][0]);

    for (j = 1; j < n; j++)
        for (i = 0; i < n-j; i++)
            f[i][j] = f[i+1][j-1] - f[i][j-1];

    printf("Enter x at which to interpolate: "); scanf("%lf", &xval);
    h = x[1] - x[0];
    u = (xval - x[0]) / h;
    result = f[0][0];
    term   = u;
    for (j = 1; j < n; j++) {
        result += term * f[0][j];
        term   *= (u - j) / (j + 1);
    }
    printf("Interpolated value at x = %.4lf is %.6lf\n", xval, result);
    return 0;
}
