#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 10

void Assignment0706();

int main()
{
	Assignment0706();
	return 0;
}

void Assignment0706()
{
	double num[SIZE] = { 1.2, 3.1, 4.3, 4.5, 6.7, 2.3, 8.7, 9.5, 2.3, 5.8 };

    printf("배열: ");
    for (int i = 0; i < (sizeof(num) / 8); i++)
    {
        printf("%.2f ", num[i]);
    }
    printf("\n");


    int temp;
    for (int i = 0; i < SIZE / 2; i++)
    {
        temp = num[i];
        num[i] = num[SIZE - i - 1]; // 요소가 10개일때 마지막 요소는 9
        num[SIZE - i - 1] = temp;
    }

    for (int i = 0; i < SIZE; i++)
    {
        printf("%.2f ", num[i]);
    }
}