/* 파일명: assignment06.c
* 내용: PA06. 점 A의 좌표 (x1, y1)과 점 B의 좌표 (x2, y2)를 입력받아 두 점 A, B를 지나는 직선의 기울기를 구하는 프로그램을 작성하시오.
* 작성자: 전민규
* 날짜: 2025.4.18
* 버전: v1.0
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int Inclination();
double Calculation(int xx1, int xx2, int yy1, int yy2);

int main()
{
	Inclination();
	return;
}

int Inclination()
{
	int x1, x2, y1, y2 = 0;

	printf("한 점의 좌표 (x1 ,y1)? ");
	scanf("%d %d", &x1 , &y1);

	printf("또 다른 점의 좌표 (x2 ,y2)? ");
	scanf("%d %d", &x2, &y2);

	double result = Calculation(x1, x2, y1, y2);

	printf("직선의 기울기: %f", result);
	return 0;
}

double Calculation(int xx1, int xx2, int yy1, int yy2)
{
	double output = 0.0L;
	output = (double)(yy2 - yy1) / (double)(xx2 - xx1);
	return output;
}