#include <stdio.h>
#include <math.h>

double f(double x) { return 1.0 / (1.0 + x); }  

int main() {
    int i, n;
    double a, b, h, sum, x;
    printf("Enter a, b, n (number of intervals): ");
    scanf("%lf %lf %d", &a, &b, &n);
    h = (b - a) / n;
    sum = (f(a) + f(b)) / 2.0;
    for (i = 1; i < n; i++) {
        x = a + i * h;
        sum += f(x);
    }
    sum *= h;
    printf("Integral (Trapezoidal) = %.6lf\n", sum);
    return 0;
}
