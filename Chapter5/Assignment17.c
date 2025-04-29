#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int Assignment0517();
int C(int M);

int main()
{
	Assignment0517();
	return 0;
}

int Assignment0517()
{
	int m = 0;
	int result = 0;

	printf("주차 시간(분)? ");
	scanf("%d", &m);

	result = C(m);

	printf("주차 요금: %d원", result);

}

int C(int M)
{
	int total = 0;

	while (1)
	{
		if (M > 30)
		{
			total += 3000;
			M -= 30;
		}
		else if (M > 10)
		{
			total += 1000;
			M -= 10;
		}
		else if (total == 25000)
		{
			break;
		}
		else
		{
			break;
		}
	}

	return total;
}