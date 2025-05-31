#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Assignment0701();

int main(void)
{
	Assignment0701();
	return 0;
}

void Assignment0701()
{
	int sequence[10] = { 0 };
	int tolerance = 0;

	printf("첫 번째 항? ");
	scanf("%d", &sequence[0]);

	printf("공차? ");
	scanf("%d", &tolerance);

	for (int i = 1; i < 10; i++)
	{
		sequence[i] = sequence[i-1] + tolerance;
	}

	printf("등차수열: ");
	for (int j = 0; j < 10; j++)
	{
		printf("%d ", sequence[j]);
	}


}