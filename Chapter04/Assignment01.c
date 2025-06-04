/* 파일명: assignment01.c
* 내용: PA01. 질량과 속력을 실수로 입력받아 운동 에너지를 구하는 프로그램을 작성하시오. 질량은 kg 단위, 속력은 m/s 단위로 입력받는다.
* 작성자: 전민규
* 날짜: 2025.4.18
* 버전: v1.0
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int Assignment0401(void);
double GetMotionEnergy(double weight, double velocity);

int main()
{
    Assignment0401();
    return 0;
}

/*
    함수명: Assignment0401()
    기능(책임): 질량, 속력을 입력받음, 운동에너지를 계산하도록 호출, 그 결과를 콘솔에 출력
    입력: 없음
    반환: 정수이며 0이면 성공, 그외 값은 에러이다.
*/

int Assignment0401(void)
{
    // 1. 질량, 속도를 입력받아 저장
    double  w, v = 0.0L;

    printf("질량 속도를 입력해주세요: ");
    scanf("%lf %lf",&w, &v);

    // 2. 운동에너지 계산
    double result = GetMotionEnergy(w, v);

    // 3. 계산한 운동에너지 출력
    printf("질량: %.2f kg, 속력: %.2f m/s 의 운동에너지는 %.2f 입니다.", w, v, result);
    return 0;
}

/*
    함수명:double GetMotionEnergy()
    기능(책임): 질량, 속력 입력받아 운동에너지를 계산하여 반환
    입력: 질량(kg), 속력(m/s)
    반환: 운동에너지
*/
double GetMotionEnergy(double weight, double velocity)
{
    double energy = 0.0L;

    //에너지 = 1/2 * 질량 * 속도 * 속도도
    energy = 1.0 / 2.0 * weight * (velocity * velocity);

    return energy;
}
