/* 파일명: assignment06.c
* 내용: PA06. 아파트의 면적을 제곱미터(m²)로 입력받아 몇 평인지 출력하는 프로그램을 작성하시오. 1m²는 0.3025평에 해당한다. 프로그램을 작성할 때 이름 있는 상수를 이용해보자.
* 작성자: 전민규
* 날짜: 2025.4.7
* 버전: v1.0
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define M2 0.3025

void apt();

int main()
{
    apt();
    return 0;
}

void apt()
{
    double a = 0.0L; //면적

    printf("아파트의 면적(제곱미터)? ");
    scanf("%lf", &a);

    printf("%.2f 제곱미터 = %.2f 평", a, a * M2);

    return;
}