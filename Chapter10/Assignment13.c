#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// POINT 구조체 정의
typedef struct {
    int x;
    int y;
} POINT;

// RECT 구조체 정의
typedef struct {
    POINT left_bottom;
    POINT right_top;
} RECT;

// 함수 선언
void print_rect();

int main() {
    print_rect(); // main에는 이 함수만 호출
    return 0;
}

// print_rect 함수 정의
void print_rect() {
    RECT rect;

    printf("직사각형의 좌하단점(x,y)? ");
    scanf("%d %d", &rect.left_bottom.x, &rect.left_bottom.y);

    printf("직사각형의 우상단점(x,y)? ");
    scanf("%d %d", &rect.right_top.x, &rect.right_top.y);

    printf("[RECT 좌하단점:(%d, %d) 우상단점:(%d, %d)]\n",
        rect.left_bottom.x, rect.left_bottom.y,
        rect.right_top.x, rect.right_top.y);
}