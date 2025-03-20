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