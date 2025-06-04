/* 파일명: assignment02.c
* 내용: PA02. 화씨 온도(F)를 실수로 입력받아 섭씨 온도(C)로 변환해서 출력하는 프로그램을 작성하시오. 화씨 온도를 섭씨 온도로 변환하는 공식은 다음과 같다.
* 작성자: 전민규
* 날짜: 2025.4.18
* 버전: v1.0
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int Conversion();
double Calculation(double fahrenheit);

int main()
{
	Conversion();
	return 0;
}

int Conversion()
{
	double F = 0.0L;

	printf("화씨온도? ");
	scanf("%lf", &F);

	double result = Calculation(F);

	printf("%.2f F = %.2f C", F, result);

	return 0;
}

double Calculation(double fahrenheit)
{
	double temperature = 0.0L;
	temperature = (fahrenheit - 32) * 5.0 / 9.0;
	return temperature;
}
