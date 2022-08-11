#include <math.h>
#include <stdio.h>

int main(void) {
    int i;
    long int f1 = 1, f2 = 1, f3 = 1, f4 = 1, f5 = 1, f6 = 1;
    double e, x, res1, res2, e1, e2;
    scanf("%lf", &x);
    for (i = 1; i <= 1; ++i) {
        f1 *= i;
    }
    for (i = 2; i <= 2; ++i) {
        f2 *= i;
    }
    for (i = 1; i <= 3; ++i) {
        f3 *= i;
    }
    for (i = 1; i <= 4; ++i) {
        f4 *= i;
    }
    for (i = 1; i <= 5; ++i) {
        f5 *= i;
    }
    res1 = exp(x);
    res2 = 1 + (x/(double)f1) + (pow(x,2)/(double)f2) + (pow(x,3)/(double)f3) + (pow(x,4)/(double)f4) + (pow(x,5)/(double)f5);
    printf("%.6lf\n", res1);
    printf("%.6lf\n", res2);
}