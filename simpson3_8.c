#include <stdio.h>

double f(double x) {
    return x * x;  
}
int main() {
    double a, b, h, result = 0.0;
    int n, i;
    printf("Enter lower limit (a): ");
    scanf("%lf", &a);
    printf("Enter upper limit (b): ");
    scanf("%lf", &b);
    printf("Enter number of subintervals (n, multiple of 3): ");
    scanf("%d", &n);
    if (n % 3 != 0) {
        printf("Error: n must be a multiple of 3.\n");
        return 1;
    }
    h = (b - a) / n;
    result = f(a) + f(b);
    for (i = 1; i < n; i++) {
        double x = a + i * h;
        if (i % 3 == 0)
            result += 2 * f(x);
        else
            result += 3 * f(x);
    }
    result = result * (3 * h / 8);
    printf("Approximate integral = %.6lf\n", result);
    return 0;
}