/* 파일명: assignment1.c
* 내용: PA01. 다음과 같이 출력하는 프로그램을 작성, 단, printf 문은 한번만 작성
* 작성자: 전민규
* 날짜: 2025.3.25
* 버전: v1.0
*/
#include <stdio.h>

void pri();

int main()
{
	pri();
	return 0;
}

void pri()
{
	printf("int main(void)\n{\n    return 0;\n}");
	return;
}