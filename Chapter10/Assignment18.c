#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

#define MAX_SONGS 8
#define MAX_PLAYLIST 5

// SONG 구조체 정의
typedef struct {
    char title[50];
    char artist[30];
    char genre[20];
    int time;
} SONG;

// 함수 선언
void manage_playlist();

// main 함수
int main() {
    manage_playlist();
    return 0;
}

// manage_playlist 함수 정의
void manage_playlist() {
    SONG songs[MAX_SONGS] = {
        {"thank u, next", "Ariana Grande", "pop", 208},
        {"Attention", "Charlie Puth", "pop", 211},
        {"별 보러 가자", "박보검", "ballad", 226},
        {"How Long", "Charlie Puth", "pop", 198},
        {"I'm Fine", "방탄소년단", "hip-hop", 198},
        {"봄날", "방탄소년단", "hip-hop", 274},
        {"Awake", "진", "ballad", 316},
        {"아낙네", "MINO", "hip-hop", 241}
    };

    SONG* playlist[MAX_PLAYLIST] = { NULL };  // 플레이리스트 포인터 배열
    int playlist_count = 0;
    int total_time = 0;
    int input;

    // 전체 곡 목록 출력
    printf("전체 곡 목록:\n");
    for (int i = 0; i < MAX_SONGS; i++) {
        printf("%d: %-20s %-15s %-10s %d초\n", i + 1, songs[i].title, songs[i].artist, songs[i].genre, songs[i].time);
    }

    while (playlist_count < MAX_PLAYLIST) {
        printf("플레이리스트에 추가할 곡 번호? ");
        scanf("%d", &input);

        if (input == 0) break;

        if (input < 1 || input > MAX_SONGS) {
            printf("잘못된 곡 번호입니다.\n");
            continue;
        }

        // 추가
        playlist[playlist_count] = &songs[input - 1];
        playlist_count++;
        total_time += songs[input - 1].time;

        // 출력
        printf(">> 플레이리스트 >>\n");
        for (int i = 0; i < playlist_count; i++) {
            printf("%s\t%s\t%s\t%d초\n", playlist[i]->title, playlist[i]->artist, playlist[i]->genre, playlist[i]->time);
        }
        printf("총 재생시간 : %d초\n", total_time);
    }
}