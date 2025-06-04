/* 파일명: assignment7.c
* 내용: PA07. 커피 사이즈(S ,T ,G)와 주문 수량을 입력받아서 출력하는 프로그램을 작성하시오. 커피 사이즈는 S, T, G 세가지 문자 중 하나로 입력
* 작성자: 전민규
* 날짜: 2025.3.27
* 버전: v1.0
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void coffie();

int main()
{
	coffie();
	return 0;
}

void coffie()
{
	char size[4]; //사이즈
	int num; // 수량

	printf("커피 사이즈(S,T,G)와 주문 수량?");
	scanf("%s %d", size, &num);
	printf("%s 사이즈 %d잔을 주문합니다.", size, num);

	return;
}
