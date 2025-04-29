#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int Assignment0501();

int main()
{
	Assignment0501();
	return 0;
}

int Assignment0501()
{
	int left, top, right, bottom, x, y = 0;

	printf("선택 영역의 좌상단점 (left, top)? ");
	scanf("%d %d", &left, &top);

	printf("선택 영역의 우상단점 (right, bottom)? ");
	scanf("%d %d", &right, &bottom);

	printf("점의 좌표 (x, y)? ");
	scanf("%d %d", &x, &y);

	if ((x >= left && x <= right) && (y >= top && y <= bottom))
	{
		printf("직사각형 모양의 선택 영역 내의 점입니다.");
	}
	else
	{
		printf("직사각형 모양의 선택 영역 밖의 점입니다.");
	}
}