/* 파일명: assignment8.c
* 내용: PA08. 실수 2개를 입력받아서 합과 차를 구해서 출력하는 프로그램을 작성하시오.
* 작성자: 전민규
* 날짜: 2025.3.27
* 버전: v1.0
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void floatPlus();

int main()
{
	floatPlus();
	return 0;
}

void floatPlus()
{
	float num1;
	float num2;
	float result;

	printf("실수 2개?");
	scanf("%f %f", &num1, &num2);

	printf("%08f + %08f = %08f", num1, num2, num1 + num2);
	printf("%08f + %08f = %08f", num1, num2, num1 - num2);

	return;
}