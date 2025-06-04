/* 파일명: assignment09.c
* 내용: PA09. 동영상의 재생시간을 초 단위로 입력받아 몇 시간 몇 분 몇 초인지 출력하는 프로그램을 작성하시오.
* 작성자: 전민규
* 날짜: 2025.4.18
* 버전: v1.0
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int Calculation();

int main()
{
	Calculation();
	return 0;
}

int Time()
{
	int video = 0;

	printf("재생시간(초)? ");
	scanf("%d", &video);

	int t = 0;
	int m = 0;
	int h = 0;


	h = video / 3600;
	m = (video % 3600) / 60;
	t = video % 60;

	printf("재생시간은 ");

	h ? printf("%d시간", h) : 0;
	m ? printf("%d분", m) : 0;
	t ? printf("%d초", t) : 0;

	printf("입니다.");

	return 0;
}
