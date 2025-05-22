#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Assignment0605();
int is_even(int num[], int size);
int is_odd(int num[], int size);

int main(void)
{
	Assignment0605();
	return 0;
}


void Assignment0605()
{
	int num[100] = { 0 };
	int e, o = 0;
	int i = 0;

	printf("정수를 빈칸으로 구분해서 입력하세요.(마지막에 0 입력)\n");

	for (i = 0; i < 100; i++) 
	{
		scanf("%d", &num[i]);
		if (num[i] == 0)
		{
			break;
		}
	}

	e = is_even(num, i);
	o = is_odd(num, i);

	printf("입력받은 정수 중 짝수는 %d개, 홀수는 %d개입니다.", e, o);

}

int is_even(int num[], int size)
{
	int even = 0;
	for (int i = 0; i < size; i++)
	{
		if (num[i] % 2 == 0)
		{
			even += 1;
		}
	}
	
	return even;
}

int is_odd(int num[], int size)
{
	int odd = 0;
	for (int i = 0; i < size; i++)
	{
		if (num[i] % 2 != 0)
		{
			odd += 1;
		}
	}

	return odd;
}