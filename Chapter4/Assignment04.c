/* 파일명: assignment04.c
* 내용: PA04. 용매의 질량과 용질의 질량을 정수로 입력받아 용액이 퍼센트 농도를 구하는 프로그램을 작성하시오. 용매의 질량과 용질의 질량은 g 단위로 입력받는다.
* 작성자: 전민규
* 날짜: 2025.4.18
* 버전: v1.0
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int Percent();
double Calculation(int menstruum, int solute);

int main()
{
	Percent();
	return 0;
}

int Percent()
{
	int mg, sg = 0;

	printf("용매(g)? ");
	scanf("%d", &mg);

	printf("용질(g)? ");
	scanf("%d", &sg);

	double density = Calculation(mg, sg);

	printf("농도: %.2f %%", density);
	return 0;
}

double Calculation(int menstruum, int solute)
{
	double pd = (double)solute / (menstruum + solute) * 100;
	return pd;
}