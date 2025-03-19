#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void scoreOut(void);

int main()
{
	scoreOut();
	return 0;
}

void scoreOut(void)
{
	int number; //번호
	float score; //학점

	printf("번호?");
	scanf("%d", &number);
	printf("학점?");
	scanf("%f", &score);

	printf("%d번 학생의 학점은 %f입니다.", number, score);
	return;
}