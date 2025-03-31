/* 파일명: assignment6.c
* 내용: PA06. 옷 사이즈를 선택하게 하고 선택된 사이즈를 출력하는 프로그램을 작성하시오. 옷 사이즈는 S, M, L 세가지 문자 중 하나로 입력
* 작성자: 전민규
* 날짜: 2025.3.27
* 버전: v1.0
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void size();

int main()
{
	size();

	return 0;
}

void size()
{
	char s[4]; // 사이즈

	printf("옷 사이즈(S,M,L)?");
	scanf("%s", s);
	printf("%s 사이즈를 선택했습니다.", s);

	return;
}