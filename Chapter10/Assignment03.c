#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

typedef	struct login {
	char id[20];
	char pw[20];
}LOGIN;

void pa10_03() {
	struct login info[5] = {
		{"qwer","1234"},
		{"asdf","5678"},
		{"qpwoeiru","zxcv"},
		{"guest","idontknow"},
		{"가나다","일이삼사"} };
	struct login data;
	int count = 0;
	int i;
	while (1) {
		count = 0;
		printf("ID? ");
		scanf("%s", &data.id);

		if (strcmp(data.id, ".") == 0) break;

		printf("PW: ");
		scanf("%s", &data.pw);

		for (i = 0; i < 5; i++) {
			if (count != 0) break;

			if (strcmp(info[i].id, data.id) == 0 && strcmp(info[i].pw, data.pw) == 0) {
				printf("로그인 성공\n");
				count = 1;
			}
			else {
				continue;
			}
		}
		if (count == 0)
			printf("로그인 실패\n");
	}
}