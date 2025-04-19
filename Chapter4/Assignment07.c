/* 파일명: assignment07.c
* 내용: PA07. 직각 삼각형에서 직각을 낀 두 변 a, b의 길이를 입력받아 빗변의 길이를 구하는 프로그램을 작성하시오.
* 작성자: 전민규
* 날짜: 2025.4.18
* 버전: v1.0
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int Hypotenuse();
double Calculation(double bottom, double height);

int main()
{
	Hypotenuse();
	return 0;
}

int Hypotenuse()
{
	double b, h = 0.0L;

	printf("밑변? ");
	scanf("%lf", &b);

	printf("높이? ");
	scanf("%lf", &h);

	double result = Calculation(b, h);

	printf("빗변의 길이: %f", result);
	return 0;
}

double Calculation(double bottom, double height)
{
	double HT = sqrt(pow(bottom, 2) + pow(height, 2));
	return HT;
}