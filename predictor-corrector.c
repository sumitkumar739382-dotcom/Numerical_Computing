#include <stdio.h>
#include <math.h>

double f(double x, double y) { return -x * y; }

int main() {
    double x1, y1, x2, y2, x3, y3p, y3c, s1, s2, s3, h, xf;
    printf("Enter x0, y0, h, xf: ");
    scanf("%lf %lf %lf %lf", &x1, &y1, &h, &xf);

    s1 = f(x1, y1);
    x2 = x1 + h;
    y2 = y1 + h * s1;           
    s2 = f(x2, y2);
    y2 = y1 + h*(s1 + s2)/2.0; 

    printf("%8s  %12s\n", "x", "y (P-C)");
    printf("%8.4lf  %12.6lf\n", x1, y1);

    while (x2 <= xf + 1e-9) {
        printf("%8.4lf  %12.6lf\n", x2, y2);
        s2  = f(x2, y2);
        y3p = y1 + 2*h*s2;           
        x3  = x2 + h;
        s3  = f(x3, y3p);
        y3c = y2 + h*(s2 + s3)/2.0;  
        y1 = y2; y2 = y3c; x2 = x3;
    }
    return 0;
}

