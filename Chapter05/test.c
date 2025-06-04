#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int sumOdd(int x);

int main()
{
	int result = 0;
	int to = 0;

	printf("Enter N: ");
	scanf("%d", &to);
	result = sumOdd(to);
	printf("%d", result);

	return 0;
}

int sumOdd(int x)
{
	int sum = 0;;

	for (int i = 0, sum = 0; i <= 5; i++)
	{
		if (i % 2) continue;
		sum += i;
	}
	return sum;
}
