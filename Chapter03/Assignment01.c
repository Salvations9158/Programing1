/* 파일명: assignment01.c
* 내용: PA01. 한 변의 길이를 입력받아 정사각형의 넓이와 둘레를 구하는 프로그램을 작성하시오.
* 작성자: 전민규
* 날짜: 2025.4.7
* 버전: v1.0
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Quadrilateral();

int main()
{
	Quadrilateral();
	return 0;
}

void Quadrilateral()
{
	int length = 0; //길이

	printf("한 변의 길이 ? ");
	scanf("%d", &length);

	printf("정사각형의 넓이 : %d\n", length * length);
	printf("정사각형의 넓이 : %d", length * 4);

	return;

}
