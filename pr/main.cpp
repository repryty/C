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
    printf("������ ���� �Է�: ");
    scanf("%d", &line);  //������ ��
    for (int i = 0; i < line; i++) {
        printf("���� �Է�(%d): ", i + 1);
        scanf("%s", data[i].title);
        printf("��ȸ�� �Է�(%d): ", i + 1);
        scanf("%d", &data[i].data[0]);
        printf("���ƿ� �Է�(%d): ", i + 1);
        scanf("%d", &data[i].data[1]);
        printf("�Ⱦ�� �Է�(%d): ", i + 1);
        scanf("%d", &data[i].data[2]);
    }

    printf("��� �������� �����Ͻðڽ��ϱ�?\n1. ��������\n2. ��������\n");
    scanf("%d", &how[0]);
    // printf(
    //     "������� �������� �����Ͻðڽ��ϱ�?\n1. ��ȸ��\n2. "
    //     "���ƿ�\n3. �Ⱦ��\n");
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
            printf("����: %s, ��ȸ��: %d, ���ƿ�: %d, �Ⱦ��: %d\n",
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