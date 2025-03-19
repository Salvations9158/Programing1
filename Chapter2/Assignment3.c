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