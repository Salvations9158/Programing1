/* 파일명: assignment5.c
* 내용: PA05. 몸무게를 입력받아서 출력하는 프로그램을 작성하시오. 몸무게는 실수로 입력받으며, 소수점 이하 2자리까지만 출력
* 작성자: 전민규
* 날짜: 2025.3.25
* 버전: v1.0
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void weight();

int main()
{
	weight();
	return 0;
}

void weight()
{
	float w; //무게

	printf("몸무게?");
	scanf("%f", &w);
	printf("입력한 몸무게는 %.2fKG입니다.", w);
	
	return 0;
}
