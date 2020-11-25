#include <iostream>
#include <algorithm>
#include <cmath>

#define u unsigned
#define s short
#define ll long long
#define REP(i, a, b) for (int i = (a); i < (b); i++)
#define REPR(i, a, b) for (int i = (a - 1); i >= (b); i--)

using namespace std;

bool canVote(u int *arr, u int N, u int M, u ll int total);

int main()
{
    u int N, M;
    cin >> N >> M;

    u int *A = (u int *)malloc(N * sizeof(u int));
    u ll int total = 0;

    REP(i, 0, N)
    {
        cin >> *(A + i);
        total += *(A + i);
    }

    sort(A, A + N);

    canVote(A, N, M, total) ? cout << "Yes\n" : cout << "No\n";

    return 0;
}

bool canVote(u int *arr, u int N, u int M, u ll int total)
{
    REP(i, N - M, N)
        if (*(arr + i) < (ceil(total / (4 * M))))
            return false;

    return true;
}