#include <math.h>
#include <stdio.h>

int main(void) {
int N, resDrops;
double molecule = 3*pow(10,-23), drop = 0.05, glass = 249.5, resMolecules;
scanf("%d", &N);
resDrops = (glass / drop) * N;
resMolecules = (glass / molecule) * N;
printf("%d %.3e", resDrops, resMolecules);
    return 0;
}