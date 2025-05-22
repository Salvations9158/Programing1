#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void Assignment0618();
void divisors(int d);

int main(void)
{
    Assignment0618();
    return 0;
}

void Assignment0618()
{
    int a, b, c;

    srand(time(NULL));

    a = rand() % 1000; 
    b = rand() % 1000;
    c = rand() % 1000;

    divisors(a);
    divisors(b);
    divisors(c);

}

void divisors(int d)
{
    int cnt = 0;
    int num[100] = { 0 };
    int j = 0; 

    for (int i = 1; i * i <= d; i++)
    {
        if (d % i == 0)
        {
            num[j] = i; 
            cnt++;
            j++;
            if (i * i != d) 
            {
                num[j] = d / i;
                cnt++;
                j++;
            }
        }
    }

    // 버블정렬
    for (int i = 0; i < cnt - 1; i++)
    {
        for (int k = 0; k < cnt - i - 1; k++)
        {
            if (num[k] > num[k + 1])
            {
                int temp = num[k];
                num[k] = num[k + 1];
                num[k + 1] = temp;
            }
        }
    }

    //선택정렬
    /*
    for (int i = 0; i < cnt - 1; i++)
    {
        int min_idx = i; // 최소값 인덱스 초기화
        for (int j = i + 1; j < cnt; j++)
        {
            if (num[j] < num[min_idx]) // 최소값 찾기
            {
                min_idx = j; // 최소값 인덱스 갱신
            }
        }
        // 최소값과 i번째 위치 교환
        if (min_idx != i)
        {
            int temp = num[i];
            num[i] = num[min_idx];
            num[min_idx] = temp;
        }
    }
    */

    // 삽입 정렬
    /*
    for (int i = 1; i < cnt; i++)
{
    int key = num[i]; // 현재 삽입할 요소
    int j = i - 1;    // 정렬된 부분의 마지막 인덱스
    while (j >= 0 && num[j] > key) // key보다 큰 요소를 오른쪽으로 이동
    {
        num[j + 1] = num[j];
        j--;
    }
    num[j + 1] = key; // key를 올바른 위치에 삽입
}
    */

    printf("%d의 약수: ", d);
    for (int i = 0; i < cnt; i++)
    {
        printf("%d ", num[i]);
    }
    printf("=> 총 %d개\n", cnt);
}