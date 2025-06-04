#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int get_red(unsigned int color);
int get_green(unsigned int color);
int get_blue(unsigned int color);
unsigned int make_rgb(int r, int g, int b);
void Assignment0609();

int main(void)
{
    Assignment0609();
    return 0;
}

void Assignment0609()
{
    unsigned int color;
    printf("RGB 색상? ");
    scanf("%x", &color);

    color &= 0x00FFFFFF; // 상위 8비트 제거

    // 색상 값 추출
    int r = get_red(color);
    int g = get_green(color);
    int b = get_blue(color);

    // 보색 계산: 255 - 각 색상 값
    unsigned int complement = make_rgb(255 - r, 255 - g, 255 - b);

    printf("RGB FF0080의 보색: 0x%06X\n", complement);
}

int get_red(unsigned int color)
{
    return (color >> 16) & 0xFF;
}

int get_green(unsigned int color)
{
    return (color >> 8) & 0xFF;
}

int get_blue(unsigned int color)
{
    return color & 0xFF;
}

unsigned int make_rgb(int r, int g, int b)
{
    return (r << 16) | (g << 8) | b;
}
