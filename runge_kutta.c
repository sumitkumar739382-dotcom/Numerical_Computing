#include <stdio.h>
#include <math.h>

double f(double x, double y) { return -x * y; }

int main() {
    double x, y, h, xf, s1, s2, s3, s4;
    printf("Enter x0, y0, h, xf: ");
    scanf("%lf %lf %lf %lf", &x, &y, &h, &xf);
    printf("%8s  %12s\n", "x", "y (RK4)");
    while (x <= xf + 1e-9) {
        printf("%8.4lf  %12.6lf\n", x, y);
        s1 = f(x,        y);
        s2 = f(x + h/2,  y + h/2 * s1);
        s3 = f(x + h/2,  y + h/2 * s2);
        s4 = f(x + h,    y + h   * s3);
        y += h * (s1 + 2*s2 + 2*s3 + s4) / 6.0;
        x += h;
    }
    return 0;
}
