/* 파일명: assignment03.c
* 내용: PA03. 질량과 부피를 실수로 입력받아 밀도를 구하는 프로그램을 작성하시오. 질량은 g 단위로 입력받고, 부피는 cm^3 단위로 입력받는다.
* 작성자: 전민규
* 날짜: 2025.4.18
* 버전: v1.0
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int Density();
double Calculation();

int main()
{
	Density();
	return 0;
}

int Density()
{
	double g, v = 0.0L;

	printf("질량(g)? ");
	scanf("%lf", &g);

	printf("부피(세제곱센티미터)? ");
	scanf("%lf", &v);

	double result = Calculation(g, v);

	printf("밀도: %f", result);

	return 0;
}

double Calculation(double weight, double volume)
{
	double value = 0.0L;
	value = weight / volume;
	return value;
}
