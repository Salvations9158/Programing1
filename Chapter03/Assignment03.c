/* 파일명: assignment03.c
* 내용: PA03. 질량과 높이를 입력받아 위치 에너지를 구하는 프로그램을 작성하시오. 질량은 kg 단위, 높이는 m 단위로, 입력받는다.
* 작성자: 전민규
* 날짜: 2025.4.7
* 버전: v1.0
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void assignment0303(void);
double calcPositionEnergy(double weight, double height);

int main()
{
    assignment0303();
    return 0;
}

void assignment0303(void)
{
    double kg, m = 0.0L;    // 질량과 높이를 저장할 변수
    double energy = 0.0L;   // 계산된 위치에너지를 저장할 변수

    printf("질량과 높이를 입력: ");
    scanf("%lf %lf", &kg, &m);

    energy = calcPositionEnergy(kg, m);
    printf("위치에너지: %f", energy);
}

double calcPositionEnergy(double weight, double height)
{
    return weight * height * 9.8;
}
