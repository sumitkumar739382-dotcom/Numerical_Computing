#include <stdio.h>
#include <math.h>

double f(double x, double y) { return -x * y; }

int main() {
    double x, y, xf, h;
    printf("Enter x0, y0, h, xf: ");
    scanf("%lf %lf %lf %lf", &x, &y, &h, &xf);
    printf("%8s  %12s\n", "x", "y (Euler)");
    printf("%8.4lf  %12.6lf\n", x, y);
    while (x < xf - 1e-9) {
        y = y + h * f(x, y);   
        x += h;
        printf("%8.4lf  %12.6lf\n", x, y);
    }
    return 0;
}
