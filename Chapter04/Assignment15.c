/* 파일명: assignment15.c
* 내용: PA15. 환전수수료율은 1.75%로 정해져 있다고 가정하고 원-달러 매매기준율고 환전우대율(%)를 입력받아 달러를 살 때 적용되는 환율을 결정하고, 구입하고자 하는 달러가 얼마인지 입력받아서 뭔 원에 해당하는지 출력하는 프로그램을 작성하시오
* 작성자: 전민규
* 날짜: 2025.4.18
* 버전: v1.0
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define Exc_Fee 1.75

int Exchange_rate();
double Calculation1(int basic_rate, double pre_exc_rate);


int main()
{
	Exchange_rate();
	return 0;
}

int Exchange_rate()
{
	int br = 0;
	double per, USD, KRW = 0.0L;

	printf("원/달러 매매기준율? ");
	scanf("%d", &br);

	printf("환율우대율(0~100%%) ");
	scanf("%lf", &per);

	double result = Calculation1(br, per);

	printf("달러 살 때 환율은 %f입니다\n", result);

	printf("구입할 달러(USD ");
	scanf("%lf", &USD);

	KRW = result * USD;

	printf("USD %.2lf 살 때 ==> KRW %.2lf", USD, KRW);
	return 0;
	
}

double Calculation1(int basic_rate, double pre_exc_rate)
{
	double exchange_fee = 0.0L;
	exchange_fee = basic_rate * (Exc_Fee * (1.0 - (pre_exc_rate / 100))) / 100;
	double er = basic_rate + exchange_fee;
	return er;
}
