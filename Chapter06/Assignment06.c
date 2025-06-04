#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Assignment0606();
int choose_menu();

int main(void)
{
	Assignment0606();
	return 0;
}

void Assignment0606()
{

	int result = choose_menu();

	switch (result)
	{
		case 1:
		{
			printf("파일 열기를 수행합니다.");
				break;
		}
		case 2:
		{
			printf("파일 저장을 수행합니다.");
			break;
		}
		case 3:
		{
			printf("인쇄를 수행합니다.");
			break;
		}
		default:
		{
			printf("종료합니다.");
			break;
		}
	}
}

int choose_menu()
{
	int num = -1;

	while (num < 0 || num > 3)
	{
		printf("[1.파일열기  2.파일저장  3.인쇄  0.종료] 선택? ");
		scanf("%d", &num);
	}
	
	return num;
}
