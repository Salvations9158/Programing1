/* 파일명: assignment9.c
* 내용: PA09. 16진수 정수를 입력받아 10진수로 출력하는 프로그램을 작성하시오.
* 작성자: 전민규
* 날짜: 2025.3.27
* 버전: v1.0
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void number();

int main()
{
	number();
	return 0;
}

void number()
{
	int num; //정수 입력

	printf("16진수 정수?");
	scanf("%x", &num);
	printf("16진수 %x는 10진수로 %d입니다.", num, num);

	return;
}
