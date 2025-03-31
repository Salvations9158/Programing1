/* 파일명: assignment2.c
* 내용: PA02. 학생의 번호와 학점을 입력받아 출력하는 프로그램을 작성하시오. 학새으이 번호는 정수로, 학점은 실수로 입력
* 작성자: 전민규
* 날짜: 2025.3.25
* 버전: v1.0
*/
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