#include <stdio.h>
#include <math.h>

double f(double x) { return 5*x*x*x - 3*x*x + 2*x + 1; }

int main() {
    double a, b, p, q, y1, y2, integral;
    double gp[] = {-1.0/sqrt(3.0), 1.0/sqrt(3.0)};
    double gw[] = {1.0, 1.0};
    printf("Enter a, b: "); scanf("%lf %lf", &a, &b);
    p = (a + b) / 2.0;
    q = (b - a) / 2.0;
    integral = 0;
    for (int i = 0; i < 2; i++)
        integral += gw[i] * f(p + q * gp[i]);
    integral *= q;
    printf("Gauss 2-point integral = %.6lf\n", integral);
    return 0;
}

