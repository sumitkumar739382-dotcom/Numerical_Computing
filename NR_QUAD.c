/*Qudratic equation using newton rhapson method*/
#include <stdio.h>
#include <math.h>

double f(double x)  { return x*x - 25; }
double df(double x) { return 2*x; }

int main() {
    double x0, x1, eps, delta;
    int i, n;
    printf("Enter x0, epsilon, delta, max_iter: ");
    scanf("%lf %lf %lf %d", &x0, &eps, &delta, &n);
    for (i = 1; i <= n; i++) {
        double f0  = f(x0);
        double fp0 = df(x0);
        if (fabs(fp0) <= delta) {
            printf("Slope too small at iter %d\n", i);
            return 1;
        }
        x1 = x0 - f0 / fp0;
        printf("Iter %d: x = %lf  f(x) = %lf\n", i, x1, f(x1));
        if (fabs((x1 - x0) / x1) < eps) {
            printf("Convergent solution: x = %lf  Iterations = %d\n", x1, i);
            return 0;
        }
        x0 = x1;
    }
    printf("Does not converge in %d iterations\n", n);
    return 0;
}
