#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Assignment0704();

int main(void)
{
	Assignment0704();
	return 0;
}

void Assignment0704()
{
	int num[] = { 23, 45, 62, 12, 99, 83, 23, 50 ,72 ,37 };

	printf("배열: ");
	for (int i = 0; i < (sizeof(num) / 4); i++)
	{
		printf("%d ", num[i]);
	}
	printf("\n");

	int max = num[0];
	int index = 0;
	for (int i = 1; i < (sizeof(num) / 4); i++)
	{
		if (max < num[i])
		{
			max = num[i];
			index = i;
		}
	}
	printf("최댓값: 인덱스=%d, 값=%d\n", index, max);


	int min = num[0];
	int index2 = 0;
	for (int i = 1; i < (sizeof(num) / 4); i++)
	{
		if (min > num[i])
		{
			min = num[i];
			index2 = i;
		}
	}
	printf("최솟값: 인덱스=%d, 값=%d", index2, min);

}