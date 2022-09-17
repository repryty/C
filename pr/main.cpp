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
    printf("������ ���� �Է�: ");
    scanf("%d", &line);  //������ ��
    for (int i = 0; i < line; i++) {
        printf("���� �Է�(%d): ", i + 1);
        scanf("%s", data[i].title);
        printf("��ȸ�� �Է�(%d): ", i + 1);
        scanf("%d", &data[i].view);
        printf("���ƿ� �Է�(%d): ", i + 1);
        scanf("%d", &data[i].like);
        printf("�Ⱦ�� �Է�(%d): ", i + 1);
        scanf("%d", &data[i].hate);
    }

    printf("��� �������� �����Ͻðڽ��ϱ�?\n1. ��������\n2. ��������\n");
    scanf("%d", &how[0]);
    printf(
        "������� �������� �����Ͻðڽ��ϱ�?\1. ��ȸ��\n2. "
        "���ƿ�\n3. �Ⱦ��\n");
    scanf("%d", &how[1]);

    view(line);

    printf("%s", data[0].title);

    return 0;
}