#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

double distance(int x1, int y1, int x2, int y2);
int Assignment0602();

int main(void)
{
	Assignment0602();
	return 0;
}

int Assignment0602()
{
	int x1, y1, x2, y2;

	double c = 0.0;

	printf("직선의 시작점 좌표? ");
	scanf("%d %d", &x1, &y1);

	printf("직선의 끝점 좌표? ");
	scanf("%d %d", &x2, &y2);

	c = distance(x1, y1, x2, y2);

	printf("(%d %d)~(%d %d) 직선의 길이: %f", x1, y1, x2, y2, c);

	return 0;
}

double distance(int x1, int y1, int x2, int y2)
{
	double result = 0;
	result = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));

	return result;
}

