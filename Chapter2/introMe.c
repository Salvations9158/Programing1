#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void introMe(void);

int main(void)
{
	introMe();
	return 0;
}

void introMe(void)
{
	char name[64]; // 이름 변수
	int age; // 나이 변수
	char hello[256]; //인사말 변수

	// 1. 이름 나이 인사말 입력 받기
	printf("이름 나이 인사말을 입력해주세요\n");
	scanf("%s %d %s", name, &age, hello);
	// 2. 이름 나이 인사말 출력
	printf("이름: %s 나이: %d \n인사말: %s", name, age, hello);

	return;
}