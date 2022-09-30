#include <stdio.h>

#include <algorithm>
using namespace std;

#define LENGTH 10

// 변수 선언

int index;

struct Videos {
    char title[50];
    int view;
    int like;
    int hate;
} video[LENGTH];

// 보조 함수

int main() {
    printf("입력할 자료의 개수를 입력하세요.");
    scanf("%d", &index);

    for (int i = 0; i < index; i++) {
        printf("영상의 제목을 입력하세요.(%d): ", i + 1);
        scanf("%s", video[i].title);

        printf("영상의 좋아요 수를 쓰세요.(%d): ", i + 1);
        scanf("%d", &video[i].like);

        printf("영상의 싫어요 수를 쓰세요.(%d): ", i + 1);
        scanf("%d", &video[i].hate);
    }

    printf("%s %d %d %d", video[0].title, video[0].view, video[0].like,
           video[0].hate);

    return 0;
}