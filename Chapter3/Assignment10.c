#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void exchange();

int main()
{
	exchange();
	return 0;
}

void exchange()
{
	double dollor, won;

	printf("KRW? ");
	scanf("%lf", &dollor);

	printf("원/달러 환율? ");
	scanf("%lf", &won);

	printf("USD %.2f = KRW %.2f", dollor, dollor * won);
	
	return;
}