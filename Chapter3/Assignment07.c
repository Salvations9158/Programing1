#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void square();

int main()
{
	square();
	return 0;
}

void square()
{
	double an = 0.0L;
	
	printf("실수? ");
	scanf("%lf", &an);

	printf("제곱: %e\n", an * an);
	printf("세제곱: %e", an * an * an);

	return;
}