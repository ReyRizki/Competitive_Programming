#include <iostream>

#define INF 2000000
#define u unsigned
#define ll long long
#define ull u ll
#define REP( i, a, b) for (int i = (a); i < (b); i++)
#define REPR( i, a, b) for (int i = (a-1); i >= (b); i--)

using namespace std;

u int solution(u int *arr, u int N);

u int absolute(int X);

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    u int K, N;
    cin >> K >> N;

    u int *A = (u int *) malloc (N * sizeof(u int));
    REP(i, 0, N)
        cin >> *(A + i);

    cout << solution(A, N) / 2 << "\n";
    
    free(A);
    return 0;
}

u int solution(u int *arr, u int N)
{
    u int min = INF;
    REP(i, 0, N)
    {
        int distance = 0;
        REP(j, i , N + i)
        {
            distance += absolute(*(arr + ((j + 1) % N)) - *(arr + (j % N)));
        }

        if (distance < min)
            min = distance;
    }

    return min;
}

u int absolute(int X)
{
    return (X < 0) ? -X : X;
}