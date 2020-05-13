// https://tlx.toki.id/courses/competitive/chapters/04/problems/G

#include <iostream>
#include <algorithm>

#define u unsigned
#define s short
#define ll long long
#define REP(i, a, b) for (auto i = (a); i < (b); i++)
#define REPR(i, a, b) for (auto i = (a-1); i >= (b); i--)

using namespace std;

typedef struct
{
    int *arr;
    bool *visited;
    int count;
} Step;

Step createStep(int M, int N);
void initailizeVisited(bool *arr, int M, int N);
void jawbreak(int *arr, int M, int N, int x, int y, int *count, int ball, bool *visited);
void collapse(int *arr, int M, int N);
int solution(int *original, int M, int N);

int main()
{
    int M, N;
    cin >> M >> N;

    int *original = (int *) malloc(M * N * sizeof(int));

    REP(i, 0, M)
        REP(j, 0, N)
            cin >> *(original + i * N + j);

    // REP(i, 0, M)
    //     REP(j, 0, N)
    //         cout << *(original + i * N + j) << ((j == N - 1) ? "\n" : " ");

    cout << solution(original, M, N) << "\n";
}

Step createStep(int M, int N)
{
    Step step;

    step.arr = (int *) malloc(M * N * sizeof(int));
    step.visited = (bool *) malloc(M * N * sizeof(bool));
    step.count = 0;

    return step;
}

void initailizeVisited(bool *arr, int M, int N)
{
    REP(i, 0, M)
        REP(j, 0, N)
            *(arr + i * N + j) = 0;
}

void jawbreak(int *arr, int M, int N, int x, int y, int *count, int ball, bool *visited)
{
    if (x >= 0 and x < M and y >= 0 and y < N)
    {
        if ((*(arr + x * N + y) != -1) and (*(arr + x * N + y) == ball) and not(*(visited + x * N + y)))
        {
            *(arr + x * N + y) = -1;
            *(visited + x * N + y) = 1;
            *count = *count + 1;
            jawbreak(arr, M, N, x - 1, y, count, ball, visited);
            jawbreak(arr, M, N, x + 1, y, count, ball, visited);
            jawbreak(arr, M, N, x, y - 1, count, ball, visited);
            jawbreak(arr, M, N, x, y + 1, count, ball, visited);
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

int solution(int *original, int M, int N)
{
    Step *step = (Step *) malloc(2 * sizeof(Step));
    int ball, max = 0, score;

    REP(i, 0, 2)
    {
        *(step + i) = createStep(M, N);
        initailizeVisited((step + i)->visited, M, N);
    }

    // copy_n(original, M * N, (step + 0)->arr);
    
    // REP(i, 0, 2)

    REP(i, 0, M)
    {
        REP(j, 0, N)
        {
            copy_n(original, M * N, (step + 0)->arr);
            (step + 0)->count = 0;
            ball = *(step->arr + i * N + j);
            jawbreak((step + 0)->arr, M, N, i, j, &((step + 0)->count), ball, (step + 0)->visited);
            collapse((step + 0)->arr, M, N);

            copy_n((step + 0)->arr, M * N, (step + 1)->arr);
            initailizeVisited((step + 1)->visited, M, N);

            REP(k, 0, M)
            {
                REP(l, 0, N)
                {
                    ball = *((step + 1)->arr + k * N + l);
                    (step + 1)->count = 0;
                    
                    if (ball != -1)
                    {
                        jawbreak((step + 1)->arr, M, N, k, l, &((step + 1)->count), ball, (step + 1)->visited);
                    }

                    score = ((step + 0)->count * ((step + 0)->count - 1)) + ((step + 1)->count * ((step + 1)->count - 1));
                    if (score > max)
                    {
                        // cout << score << endl;
                        max = score;
                    }
                }
            }
        }
    }

    // ball = *(step->arr + 0 * N + 0);
    // jawbreak((step + 0)->arr, M, N, 0, 0, &(step->count), ball, step->visited);
    // collapse((step + 0)->arr, M, N);

    // REP(i, 0, M)
    //     REP(j, 0, N)
    //         cout << *((step + 0)->visited + i * N + j) << (j == M - 1 ? "\n" : " ");
            // cout << *((step + 0)->arr + i * N + j) << (j == M - 1 ? "\n" : " ");

    return max;
}