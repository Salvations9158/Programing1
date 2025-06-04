/* 파일명: assignment3.c
* 내용: PA03. 날짜를 연, 월, 일로 입력받아서 출력하는 프로그램을 작성하시오. 연, 월, 일은 정수로 입력 받는다.
* 작성자: 전민규
* 날짜: 2025.3.25
* 버전: v1.0
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void today();

int main()
{
	today();
	return 0;
}

void today()
{
	int year; //연
	int month; //월
	int day; //일

	printf("연?");
	scanf("%d", &year);
	printf("월?");
	scanf("%d", &month);
	printf("일?");
	scanf("%d", &day);

	printf("입력한 날짜는 %d년 %d월 %d일입니다.", year, month, day);

	return;
}
