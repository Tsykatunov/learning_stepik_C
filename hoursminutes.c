#include <math.h>
#include <stdio.h>

int main(void) {
int k, hours, minutes;
scanf("%d", &k);
hours = k / 3600;
minutes = k/60%60;
printf("%d %d", hours, minutes);
    return 0;
}