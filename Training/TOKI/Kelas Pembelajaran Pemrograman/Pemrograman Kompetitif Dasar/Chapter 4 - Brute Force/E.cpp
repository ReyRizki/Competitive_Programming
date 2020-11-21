#include <iostream>
#include <cstdio>

#define REP(i, a, b) for (int i = (a); i < (b); i++)
#define REPR(i, a, b) for (int i = (a - 1); i >= (b); i--)

using namespace std;

int solution(int *arr, int M, int N);

void jawbreak(int *arr, int M, int N, int x, int y, int *count, int ball);

int main()
{
    int M, N;
    int *arr;

    cin >> M >> N;

    arr = (int *)malloc(M * N * sizeof(int));

    REP(i, 0, M)
    REP(j, 0, N)
    cin >> *(arr + i * N + j);

    int result = solution(arr, M, N);
    cout << result * (result - 1) << endl;

    return 0;
}

int solution(int *arr, int M, int N)
{
    int max = 0, count;
    int ball;

    REP(i, 0, M)
    {
        REP(j, 0, N)
        {
            count = 0;
            ball = *(arr + i * N + j);
            if (ball != -1)
                jawbreak(arr, M, N, i, j, &count, ball);

            if (count > max)
                max = count;

        }
    }   

    return max;
}

void jawbreak(int *arr, int M, int N, int x, int y, int *count, int ball)
{
    if (x >= 0 && x < M && y >= 0 && y < N)
    {
        if ((*(arr + x * N + y) != -1) && (*(arr + x * N + y) == ball))
        {
            *(arr + x * N + y) = -1;
            *count = *count + 1;
            jawbreak(arr, M, N, x - 1, y, count, ball);
            jawbreak(arr, M, N, x + 1, y, count, ball);
            jawbreak(arr, M, N, x, y - 1, count, ball);
            jawbreak(arr, M, N, x, y + 1, count, ball);
        }
    }
}