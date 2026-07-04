#include <stdio.h>
#include <math.h>

double f  (double x, double y) { return x + y; }
double f2 (double x, double y) { return 1 + f(x, y); }  
int main() {
    double x, y, xf, h;
    printf("Enter x0, y0, step h, final x: ");
    scanf("%lf %lf %lf %lf", &x, &y, &h, &xf);
    printf("%8s  %12s\n", "x", "y");
    printf("%8.4lf  %12.6lf\n", x, y);
    while (x < xf - 1e-9) {
        double y1 = f(x, y);
        double y2 = f2(x, y);
        y = y + h*y1 + (h*h/2.0)*y2;  
        x += h;
        printf("%8.4lf  %12.6lf\n", x, y);
    }
    return 0;
}
