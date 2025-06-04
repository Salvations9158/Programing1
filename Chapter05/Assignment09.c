#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define H 4000
#define P 2000
#define C 1500
#define Com 6500

int Assignment0509();

int main()
{
	Assignment0509();
	return 0;
}

int Assignment0509()
{
	int h, p, c, combo = 0;
	int total = 0;

	printf("[햄버거 4000원, 감자튀김 2000원, 콜라 1500원, 세트 6500원]\n");

	printf("햄버거 개수? ");
	scanf("%d", &h);

	printf("감자튀김 개수? ");
	scanf("%d", &p);

	printf("콜라 개수? ");
	scanf("%d", &c);
	
	while (1)
	{
		if (h > 0 && p > 0 && c > 0)
		{
			h--;
			p--;
			c--;
			combo++;
		}
		else
		{
			total += h * H;
			total += p * P;
			total += c * C;
			total += combo * Com;
			break;
		}
	}


	printf("\n");
	printf("상품명       단가   수량   금액\n");
	if (combo > 1) printf("세트         6500     %d   %d\n", combo, combo * Com);
	if (h > 0) printf("햄버거       6500     %d    %d\n", h, h * H);
	if (p > 0) printf("감자튀김     4000     %d    %d\n", p, p * P);
	if (c > 0) printf("콜라         1500     %d    %d\n", c, c * C);
	printf("--------------------------------------------------\n");
	printf("합계                       %d", total);

	return 0;
}
