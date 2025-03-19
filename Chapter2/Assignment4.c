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