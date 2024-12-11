#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main() {

    double a, b, x;

    printf("a: ");
    scanf("%lf", &a);

    printf(" b: ");
    scanf("%lf", &b);

    printf(" x: ");
    scanf("%lf", &x);


    double result = (a * x - atan(3 * x)) / sqrt(fabs(x)) + b;


    printf("result: %lf\n", result);

    return 0;
}
