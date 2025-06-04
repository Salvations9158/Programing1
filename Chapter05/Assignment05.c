#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int Assignment0505();
int C(int t, char d);

int main()
{
	Assignment0505();
	return 0;
}

int Assignment0505()
{
	int temperature = 0;
	char division = '\0';

	printf("온도? ");
	scanf("%d %c", &temperature, &division);
	
	C(temperature, division);

	return 0;
}

int C(int t, char d)
{
	double result = 0.0;

	if (d == 'C')
	{
		result = (t * (9.0 / 5.0)) + 32;
		printf("%.2f C ==> %.2f F", (double)t, result);
	}
	else if (d == 'F')
	{
		result = (t - 32) * (9.0 / 5.0);
		printf("%.2f F ==> %.2f C", (double)t, result);
	}
	else
	{
		printf("단위 입력 오류: 'C' 또는 'F'를 입력하세요.\n");
	}

	return 0;
}
