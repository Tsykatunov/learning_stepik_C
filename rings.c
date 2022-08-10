#include <math.h>
#include <stdio.h>

int main(void) {
int Ri, Ro, width;
double pi = 3.14159265358979323846, Sg;
scanf("%d%d", &Ri, &Ro);
width = Ro - Ri;
Sg = (pi * (pow(Ro, 2) - pow(Ri, 2)))* 100;
printf("%d %.2lf", width, Sg);
    return 0;
}