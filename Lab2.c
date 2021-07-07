#include <stdio.h>

int main() {
    double b;
    scanf("%lf", &b);
    double z1 = (sqrt(2 * b + 2 * sqrt(b * b - 4))) / (sqrt(b * b - 4) + b + 2);
    double z2 = 1/sqrt(b+2);
    printf("z1=%lf z2=%lf", z1, z2);
    }
