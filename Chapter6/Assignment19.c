#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void Assignment0619();
void graph(int a);

int main(void)
{
	Assignment0619();
	return 0;
}

void Assignment0619()
{
    int a, b, c;

    srand(time(NULL));

    a = rand() % 10000;
    b = rand() % 10000;
    c = rand() % 10000;

    graph(a);
    graph(b);
    graph(c);
}
/*
void graph(int a)
{
    int ad = a / 100; 

    printf("%d: ", ad); 
    for (int i = 0; i < ad; i++) 
    {
        printf("*");
    }
    printf("\n");
}
*/

void graph(int a)
{
    int ad = a / 100;
    char result[1000]; 
    int len = 0;

    sprintf(result, "%d: ", ad);
    len = strlen(result);

    // 별(*) 추가
    for (int i = 0; i < ad; i++)
    {
        result[len + i] = '*';
    }
    result[len + ad] = '\0'; // 문자열 종료

    printf("%s\n", result);
}