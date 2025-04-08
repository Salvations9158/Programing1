/* 파일명: assignment04.c
* 내용: PA04. 물체의 작용한 힘의 크기와 힘의 방향으로 이동한 거리를 입력받아 한 일의 양을 구하는 프로그램을 작성하시오. 힘의 크기는 N으로 입력받고, 이동한 거리는 m 단위로 입력받는다.
* 작성자: 전민규
* 날짜: 2025.4.7
* 버전: v1.0
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void J();

int main()
{
	J();
	return 0;
}

void J()
{
	double N = 0.0L; //힘
	double m = 0.0L; //질량

	printf("힘(N)? ");
	scanf("%lf", &N);

	printf("이동거리(m)? ");
	scanf("%lf", &m);

	printf("일의 양: %.2f J", N * m);

	return;
}