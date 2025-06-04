/* 파일명: assignment10.c
* 내용: PA10. 항공권 에약 시 여정의 총 소요시간을 시간 단위로 입력받아서 며칠 몇 시간 몇 분인지 출력하는 프로그램을 작성하시오. 총 소요시간은 실수로 입력받는다. 예를 들어 소요시간이 10.5시간이면 10시간 30분이라는 의미이다.
* 작성자: 전민규
* 날짜: 2025.4.18
* 버전: v1.0
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int Calculation();

int main()
{
	Calculation();
	return 0;
}

int Calculation()
{
    double timetaken = 0.0;

    int d = 0;    // 일
    int h = 0;    // 시간
    int m = 0;    // 분

    printf("시간(시간 단위, 예: 25.5)? ");
    scanf("%lf", &timetaken);

    d = (timetaken / 24); 


    h = (timetaken - (d * 24)); 

    // 분 계산
    double remainingHours = timetaken - (d * 24) - h; 
    m = (int)(remainingHours * 60); 

    printf("시간: %d일 %d시간 %d분\n", d, h, m);

    return 0;
}
