#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int change();
int pri(int m);

int main()
{
    change();
	return 0;
}

int change()
{
	int money = 0;

	printf("거스름돈? ");
	scanf("%d", &money);

	money -= money % 10; //절사
	printf("거스름돈 (10원미만 절사): %d\n", money);
    pri(money);
	
    return 0;
}

int pri(int m)
{
	printf(" %5d원 %2d장\n", 50000, m / 50000);
	m %= 50000;

	printf(" %5d원 %2d장\n", 10000, m / 10000);
	m %= 10000;

	printf(" %5d원 %2d장\n", 5000, m / 5000);
	m %= 5000;

	printf(" %5d원 %2d장\n", 1000, m / 1000);
	m %= 1000;

	printf(" %5d원 %2d개\n", 100, m / 100);
	m %= 100;

	printf(" %5d원 %2d개\n", 10, m / 10);
	m %= 10;

	return 0;
}
