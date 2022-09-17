#include <stdio.h>
#include <string.h>

#include <algorithm>
using namespace std;

int line = 0;
int how[2];

struct DataBase1 {
    char title[30];
    int view;
    int like;
    int hate;
} data[50];

int compare(int a, int b) { return a < b; }

int view(int lines) {
    int arr[60];
    for (int i = 0; i < lines; i++) {
        arr[i] = data[i].view;
    }
    if (how[0] == 1)
        sort(arr, arr + lines);
    else
        sort(arr, arr + lines, compare);
}

int main() {
    char temp[100];
    printf("데이터 개수 입력: ");
    scanf("%d", &line);  //데이터 수
    for (int i = 0; i < line; i++) {
        printf("제목 입력(%d): ", i + 1);
        scanf("%s", data[i].title);
        printf("조회수 입력(%d): ", i + 1);
        scanf("%d", &data[i].view);
        printf("좋아요 입력(%d): ", i + 1);
        scanf("%d", &data[i].like);
        printf("싫어요 입력(%d): ", i + 1);
        scanf("%d", &data[i].hate);
    }

    printf("어느 방향으로 정렬하시겠습니까?\n1. 오름차순\n2. 내림차순\n");
    scanf("%d", &how[0]);
    printf(
        "어느것을 기준으로 정렬하시겠습니까?\1. 조회수\n2. "
        "좋아요\n3. 싫어요\n");
    scanf("%d", &how[1]);

    view(line);

    printf("%s", data[0].title);

    return 0;
}