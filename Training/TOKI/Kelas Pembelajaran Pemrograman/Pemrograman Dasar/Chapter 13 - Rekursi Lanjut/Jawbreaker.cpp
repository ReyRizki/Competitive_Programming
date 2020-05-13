// Link: https://training.ia-toki.org/training/curriculums/1/courses/1/chapters/18/problems/77/

#include <iostream>

using namespace std;

int M, N;
int matrix[25][25];
int ball;
int count;
bool visited[25][25];

void jawbreak(int x, int y) {
    if (x >= 0 && x < M && y >= 0 && y < N) {
        if (!visited[x][y]) {
            visited[x][y] = true;
            if (matrix[x][y] == ball) {
                count = count + 1;
                jawbreak(x - 1, y);
                jawbreak(x + 1, y);
                jawbreak(x, y - 1);
                jawbreak(x, y + 1);
            }
        }
    }
}

int main() {
    // DECLARATION
    int B, K;

    // INPUT
    scanf("%d %d", &M, &N);
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++){
            scanf("%d", &matrix[i][j]);
        }
    }
    scanf("%d %d", &B, &K);

    // PROCESS
    ball = matrix[B][K];
    count = 0;
    jawbreak(B, K);

    // OUTPUT
    printf("%d\n", count * (count - 1));

    return 0;
}