#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int get_perimeter(int a, int b);
int Assignment0601();

int main(void)
{
	Assignment0601();
	return 0;
}

int Assignment0601()
{
	int w, l, result;

	printf("가로? ");
	scanf("%d", &w);
	printf("세로? ");
	scanf("%d", &l);

	result = get_perimeter(w, l);

	printf("직사각형의 둘레: %d", result);

	return 0;
}

int get_perimeter(int a, int b)
{
	return (a + b) * 2;
}
