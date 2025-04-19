/* 파일명: assignment16.c
* 내용: PA16. 0~255사이의 값을 red, green, blue의 순서로 3개 입력받아서 RGB 색상을 만들어서 출력하는 프로그램을 작성하시오. RGB 색상을 출력할 때는 바이트 단위로 값을 알아보기 쉽도록 16진수로 출력한다.
* 작성자: 전민규
* 날짜: 2025.4.18
* 버전: v1.0
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void processRGB();

int main() {
    processRGB(); 
    return 0;
}

void processRGB() 
{
    int red, green, blue;

    printf("red? ");
    scanf("%d", &red);
    red = (red > 255) ? 0 : red; 

    printf("green? ");
    scanf("%d", &green);
    green = (green > 255) ? 0 : green; 

    printf("blue? ");
    scanf("%d", &blue);
    blue = (blue > 255) ? 0 : blue; 

    unsigned int rgb = (blue << 16) | (green << 8) | red;

    printf("RGB 트루컬러: %06X\n", rgb);
}


