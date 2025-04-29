#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int Assignment0504();
int C(int y);

int main()
{
	Assignment0504();
	return 0;
}

int Assignment0504()
{
	int year = 0;

	printf("연도? ");
	scanf("%d", &year);

	C(year);

}

int C(int y)
{
	if (y % 4 == 0)
	{
		if (y % 100 == 0)
		{
			if (y % 400 == 0)
			{
				printf("%d년은 윤년입니다.", y);
			}
			else
			{
				printf("%d년은 평년입니다.", y);
			}
		}
		else
		{
			printf("%d년은 윤년입니다.", y);
		}
	}
	else
	{
		printf("%d년은 평년입니다.", y);
	}

	return 0;
}