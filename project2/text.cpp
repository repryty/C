#include <stdio.h>

int max(int a, int b) {
    if (a > b)
        return a;
    else
        return b;
}  // max 함수 선언

int main(void) {
    int N, K;
    scanf("%d %d", &N, &K);  //입력

    int objects[N][2];
    for (int i = 0; i < N; i++) {  // n번 반복
        scanf("%d %d", &objects[i][0],
              &objects[i][1]);  //오브젝트 배열 n번의 1,2번에 저장
    }

    int value[N + 1][K + 1];
    for (int i = 0; i < K + 1; i++) {  // K+1번
        value[0][i] = 0;
    }
    for (int i = 0; i < N + 1; i++) {  // N+1번 반복
        value[i][0] = 0;
    }

    for (int i = 1; i < N + 1; i++) {
        for (int j = 1; j < K + 1; j++) {
            if (objects[i - 1][0] > j)  //무게가 j보다 크다면
                value[i][j] = value[i - 1][j];
            else {
                // printf("i: %d, j: %d, N: %d, K: %d\n", i, j, N, K);
                value[i][j] = max(
                    value[i - 1][j],
                    value[i - 1][j - objects[i - 1][0]] +
                        objects[i - 1][1]);  //둘중 더 큰것을 value[i][j]로 지정
            }
        }
    }

    printf("Biggest Price: %d\n", value[N][K]);
}
