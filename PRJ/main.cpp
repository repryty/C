#include <stdio.h>

#include <algorithm>
using namespace std;

#define LENGTH 10

// ���� ����

int index;

struct Videos {
    char title[50];
    int view;
    int like;
    int hate;
} video[LENGTH];

// ���� �Լ�

int main() {
    printf("�Է��� �ڷ��� ������ �Է��ϼ���.");
    scanf("%d", &index);

    for (int i = 0; i < index; i++) {
        printf("������ ������ �Է��ϼ���.(%d): ", i + 1);
        scanf("%s", video[i].title);

        printf("������ ���ƿ� ���� ������.(%d): ", i + 1);
        scanf("%d", &video[i].like);

        printf("������ �Ⱦ�� ���� ������.(%d): ", i + 1);
        scanf("%d", &video[i].hate);
    }

    printf("%s %d %d %d", video[0].title, video[0].view, video[0].like,
           video[0].hate);

    return 0;
}