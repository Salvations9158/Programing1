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
    double kg, m;    // 질량과 높이를 저장할 변수
    double energy;   // 계산된 위치에너지를 저장할 변수

    printf("질량과 높이를 입력: ");
    scanf("%lf %lf", &kg, &m);

    energy = calcPositionEnergy(kg, m);
    printf("위치에너지: %f", energy);
}

double calcPositionEnergy(double weight, double height)
{
    return weight * height * 9.8;
}