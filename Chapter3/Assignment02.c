/* 파일명: assignment02.c
* 내용: PA02. 가로의 길이와 세로의 길이를 입력받아 직사각형의 넓이와 둘레를 구하는 프로그램을 작성하시오. 
* 작성자: 전민규
* 날짜: 2025.4.7
* 버전: v1.0
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void rectangle();

int main()
{
	rectangle();
	return 0;
}

void rectangle()
{
	int width = 0; //가로 길이
	int length = 0; //세로 길이

	printf("가로의 길이? ");
	scanf("%d", &width);

	printf("세로의 길이? ");
	scanf("%d", &length);
	
	printf("직사각형의 넓이: %d\n", width * length);
	printf("직사각형의 둘래: %d", width * 2 + length * 2);

	return;
}