#include <math.h>
#include <stdio.h>

int main(void) {
int r, h;
double pi, Vcil, Vkon;
pi = 3.14159265358979323846;
scanf("%d%d", &r, &h);
Vcil = h * pi * pow(r, 2);
Vkon = ((h * pi) / 3) * pow(r, 2);
printf("%.2lf %.2lf", Vcil, Vkon);
    return 0;
}