#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int Assignment0508();
int C(int a, int b, char c);

int main()
{
	Assignment0508();
	return 0;
}

int Assignment0508()
{
	unsigned int f, s, v = 0;
	char m = '\0';

	printf("비트 연산식? ");
	scanf("%i %c %i", &f, &m, &s);

	v = C(f, s, m);

	printf("%X %c %X = %X", f, m, s, v);

	return 0;
}

int C(int a, int b, char c)
{
	int result = 0;


	switch (c)
	{
	case '&':
	{
		result = a & b;
		break;
	}
	case '|':
	{
		result = a | b;
		break;
	}
	case '^':
	{
		result = a ^ b;
		break;
	}
	default:
		break;
	}

	return result;
}
