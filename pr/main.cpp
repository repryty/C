#include <stdio.h>
#include <stdlib.h>

#include <algorithm>
using namespace std;

int line = 0;
int how[2];

struct DataBase1 {
    char title[30];
    int data[4];
} data[50];

struct Output1 {
    char title[30];
    int data[4];
} out[50];

int compare1(const void *a, const void *);
int compare2(const void *a, const void *);

int find1(int *arr1) {
    for (int i = 0; i < line; i++) {
        for (int j = 0; j < line; j++) {
            if (arr1[i] == data[j].data[0]) {
                out[i].data[0] = data[j].data[0];
                out[i].data[1] = data[j].data[1];
                out[i].data[2] = data[j].data[2];
                out[i].data[3] = data[j].data[3];
            }
        }
    }
}

int main() {
    char temp[100];
    printf("데이터 개수 입력: ");
    scanf("%d", &line);  //데이터 수
    for (int i = 0; i < line; i++) {
        printf("제목 입력(%d): ", i + 1);
        scanf("%s", data[i].title);
        printf("조회수 입력(%d): ", i + 1);
        scanf("%d", &data[i].data[0]);
        printf("좋아요 입력(%d): ", i + 1);
        scanf("%d", &data[i].data[1]);
        printf("싫어요 입력(%d): ", i + 1);
        scanf("%d", &data[i].data[2]);
    }

    printf("어느 방향으로 정렬하시겠습니까?\n1. 오름차순\n2. 내림차순\n");
    scanf("%d", &how[0]);
    // printf(
    //     "어느것을 기준으로 정렬하시겠습니까?\n1. 조회수\n2. "
    //     "좋아요\n3. 싫어요\n");
    // scanf("%d", &how[1]);

    // printf("%s", data[0].title);

    if (true) {
        int arr1[51];

        for (int i = 0; i < line; i++) {
            arr1[i] = data[i].data[0];
        }

        if (how[0] == 1) {
            qsort(arr1, line, sizeof(int), compare1);
        } else {
            qsort(arr1, line, sizeof(int), compare2);
        }

        for (int i = 0; i < line; i++) {
            find1(arr1);
            printf("제목: %s, 조회수: %d, 좋아요: %d, 싫어요: %d\n",
                   out[i].title, out[i].data[0], out[i].data[1],
                   out[i].data[2]);
        }
    }

    return 0;
}

// int main() {
//     int arr1[] = {1, 3, 2, 4, 6, 5, 8, 7};
//     int arrsize = sizeof(arr1) / sizeof(int);
//     qsort(arr1, arrsize, sizeof(int), compare);

//     for(int i =0; i<arrsize; i++){
//         printf("%d", arr1[i]);
//     }
// }

int compare1(const void *a, const void *b) { return (*(int *)a - *(int *)b); }
int compare2(const void *a, const void *b) { return (*(int *)b - *(int *)a); }