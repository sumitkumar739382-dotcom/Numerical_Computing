#include <stdio.h>
#include <math.h>

double f(double x) { return x*x*x; }

int main() {
    int i, n;
    double a, b, h, sum, x;
    printf("Enter a, b, n (even): ");
    scanf("%lf %lf %d", &a, &b, &n);
    if (n % 2 != 0) { printf("n must be even for Simpson's rule\n"); return 1; }
    h = (b - a) / n;
    sum = f(a) + f(b);
    for (i = 1; i < n; i++) {
        x = a + i * h;
        sum += (i % 2 == 0) ? 2*f(x) : 4*f(x);
    }
    sum *= h / 3.0;
    printf("Integral (Simpson 1/3) = %.6lf\n", sum);
    return 0;
}
