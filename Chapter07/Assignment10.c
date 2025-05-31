#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Assignment0710();

int main()
{
	Assignment0710();
	return 0;
}

void Assignment0710()
{
	int x[3][3] = { {10,20,30}, {40,50,60}, {70,80,90} };
	int y[3][3] = { {9,8,7}, {6,5,4}, {3,2,1} };
	int sum[3][3] = { 0 };

	printf("x 행렬: \n");

	int a, b;
	for (int a = 0; a <= 2; a++)
	{
		for (int b = 0; b <= 2; b++)
		{
			printf("%d ", x[a][b]);
		}
		printf("\n");
	}
	printf("\n");
	printf("y 행렬: \n");

	int c, d;
	for (int c = 0; c <= 2; c++)
	{
		for (int d = 0; d <= 2; d++)
		{
			printf("%d ", x[c][d]);
		}
		printf("\n");
	}
	printf("\n");
	printf("x + y 행렬: \n");

	int i, j;
	for (i = 0; i <= 2; i++)
	{
		for (j = 0; j <= 2; j++)
		{
			sum[i][j] = x[i][j] + y[i][j];
			printf("%d ", sum[i][j]);
		}
		printf("\n");
	}

}