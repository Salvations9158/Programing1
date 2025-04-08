#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define M 0.3025

int main(void) 
{
    double a, b;

    printf("아파트의 면적(제곱미터)? ");
    scanf("%lf", &a);

    b = a * M;


    printf("%.2f 제곱미터 = %.2f 평", a, b);

    return 0;
}