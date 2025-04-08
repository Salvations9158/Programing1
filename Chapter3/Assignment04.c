#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void J();

int main()
{
	J();
	return 0;
}

void J()
{
	double N = 0.0L;
	double m = 0.0L;

	printf("힘(N)? ");
	scanf("%lf", &N);

	printf("이동거리(m)? ");
	scanf("%lf", &m);

	printf("일의 양: %.2f J", N * m);

	return;
}