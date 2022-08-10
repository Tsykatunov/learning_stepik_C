#include <math.h>
#include <stdio.h>

int main(void) {
int A, a, b, c, d;
double  res;
scanf("%d", &A);
d = A%10;
c = A/10%10;
b = A/100%10;
a = A/1000;
res = (double)(a * c) / (double)(b * d);
printf("%.2lf", res);
    return 0;
}