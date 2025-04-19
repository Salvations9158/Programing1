/* 파일명: assignment05.c
* 내용: PA05. 반지름과 높이를 정수로 입력받아 원기둥의 부피를 구하는 프로그램을 작성하시오. 이때 파이는 3.141592라고 하자.
* 작성자: 전민규
* 날짜: 2025.4.18
* 버전: v1.0
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define PI 3.141592

int Cylinder();
double Calculation(int length, int height);

int main()
{
	Cylinder();
	return 0;
}

int Cylinder()
{
	int l, h = 0;

	printf("반지름의 길이? ");
	scanf("%d", &l);

	printf("높이? ");
	scanf("%d", &h);

	double result = Calculation(l, h);

	printf("원기둥의 부피: %f", result);
	return 0;
}

double Calculation(int length, int height)
{
	double volume = 0.0L;
	volume = PI * length * length * height;
	return volume;
}