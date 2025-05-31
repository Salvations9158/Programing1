#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Assignment0716();
int find_arrey(int arr[], int key);

int main(void)
{
	Assignment0716();
	return 0;
}

void Assignment0716()
{
	int num[10] = { 23, 45, 62, 12,99, 83, 23, 50, 72, 37 };
	int key = 0;

	for (int i = 0; i < 10; i++)
	{
		printf("%d ", num[i]);
	}
	printf("\n");

	printf("찾을 값? ");
	scanf("%d", &key);

	int result = find_arrey(num,key);
	
	printf("%d는 %d번째 원소입니다.", key, result);
}

int find_arrey(int arr[], int key)
{
	int i;
	for (i = 0; i < 10; i++)
	{
		if (arr[i] == key)
		{
			return i;
		}
	}
	return -1;
}