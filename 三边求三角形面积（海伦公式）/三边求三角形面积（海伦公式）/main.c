#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
int main() {
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    double C = (a + b + c) / 1.0f;
    double p = C / 2.0f;
    double S = sqrt(p * (p - a) * (p - b) * (p - c));
    printf("circumference=%.2lf area=%.2lf", C, S);

    return 0;
}