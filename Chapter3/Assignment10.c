/* 파일명: assignment10.c
* 내용: PA010. 원/달러 환율과 달러를 입력받아 몇 원인지 출력하는 프로그램을 출력하시오.
* 작성자: 전민규
* 날짜: 2025.4.7
* 버전: v1.0
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void exchange();

int main()
{
	exchange();
	return 0;
}

void exchange()
{
	double dollor, won = 0.0L; //달러와 원화 선언 및 초기화

	printf("KRW? ");
	scanf("%lf", &dollor);

	printf("원/달러 환율? ");
	scanf("%lf", &won);

	printf("USD %.2f = KRW %.2f", dollor, dollor * won);
	
	return;
}