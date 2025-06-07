#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void Assignment1001();

typedef struct LOGIN
{
	char id[21];
	char ps[21];
} Login;

int main()
{
	Assignment1001();
	return 0;
}

void Assignment1001()
{
	Login info;

	printf("ID? ");
	scanf("%s", &info.id);
	printf("Password? ");
	scanf("%s", &info.ps);


	printf("ID: %s\n", info.id);
	printf("PW: ");
	for (int i = 0; i < strlen(info.ps)+1; i++)
	{
		printf("*");
	}

}