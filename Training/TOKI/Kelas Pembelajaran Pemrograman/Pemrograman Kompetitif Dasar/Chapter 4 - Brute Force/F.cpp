#include <iostream>
#include <algorithm>

#define u unsigned
#define ll long long
#define ull u ll
#define REP( i, a, b) for (int i = (a); i < (b); i++)
#define REPR( i, a, b) for (int i = (a-1); i >= (b); i--)

using namespace std;

void getMax(int *arr, int M, int N, int *maxX, int *maxY);
void jawbreak(int *arr, int M, int N, int x, int y, int *count, int ball);
void collapse(int *arr, int M, int N);

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int M, N;
    cin >> M >> N;

    int *arr = (int *)malloc(M * N * sizeof(int));
    int *sol = (int *)malloc(M * N * sizeof(int));

    REP(i, 0, M)
        REP(j, 0, N)
            cin >> *(arr + i * N + j);

    copy_n(arr, M * N, sol);

    int maxX, maxY;
    getMax(arr, M, N, &maxX, &maxY);

    int count = 0, ball = *(sol + maxX * N + maxY);
    jawbreak(sol, M, N, maxX, maxY, &count, ball);

    collapse(sol, M, N);
    
    REP(i, 0, M)
    {
        REP(j, 0, N)
        {
            (*(sol + i * N + j) == -1) ? cout << "." : cout << *(sol + i * N + j);
            (j < N-1) ? cout << " " : cout << "\n";
        }
    }
}

void getMax(int *arr, int M, int N, int *maxX, int *maxY)
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
            {
                *maxX = i;
                *maxY = j;
                max = count;
            }
        }
    }
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

void collapse(int *arr, int M, int N)
{
    int temp, trans;

    REPR(i, M, 0)
    {
        REP(j, 0, N)
        {
            if (*(arr + i * N + j) == -1)
            {
                temp = -1;
                trans = i -1;
                while ((temp == -1) and (trans >= 0))
                {
                    if (*(arr + trans * N + j) != -1)
                        swap(*(arr + i * N + j), *(arr + trans * N + j));
                    
                    temp = *(arr + i * N + j);
                    trans--;
                }
            }
        }
    }
}