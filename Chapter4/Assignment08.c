/* 파일명: assignment08.c
* 내용: PA08. 반지름의 길이를 입력받아 구의 부피를 구하는 프로그램을 작성하시오. 이때 파이는3.141592라고 하자.
* 작성자: 전민규
* 날짜: 2025.4.18
* 버전: v1.0
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

#define PI 3.141592

int Volume();
double Calculation(double length);

int main()
{
	Volume();
	return 0;
}

int Volume()
{
	double l = 0.0L;

	printf("반지름의 길이: ");
	scanf("%lf", &l);

	double result = Calculation(l);
	
	printf("구의 부피: %f", result);

	return 0;
}

double Calculation(double length)
{
	double Vl = 0.0L;
	Vl = 4.0 / 3.0 * PI * pow(length, 3);
	return Vl;
}