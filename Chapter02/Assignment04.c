/* 파일명: assignment4.c
* 내용: PA04. 시간을 시, 분, 초로 입력받아서 출력하는 프로그램을 작성하시오. 예를 들어 1시 1분 1초는 "01:01:01" 로 출력
* 작성자: 전민규
* 날짜: 2025.3.25
* 버전: v1.0
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void time();

int main()
{
	time();
	return 0;
}

void time()
{
	int h; //시
	int m; //분
	int s; //초

	printf("시?");
	scanf("%d", &h);
	printf("분?");
	scanf("%d", &m);
	printf("초?");
	scanf("%d", &s);

	printf("입력한 시간은 %02d:%02d:%02d입니다.", h, m, s);

	return;
}
