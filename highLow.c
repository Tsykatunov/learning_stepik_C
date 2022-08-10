#include <math.h>
#include <stdio.h>

int main(void) {
int M, N, resLow, resHigh, c;
double x;
scanf("%d%d", &M, &N);
x = ((double)M / (double)N);
resLow = (int)x % 10;
c = x * 10;
resHigh = c % 10;
printf("%d %d", resLow, resHigh);
    return 0;
}