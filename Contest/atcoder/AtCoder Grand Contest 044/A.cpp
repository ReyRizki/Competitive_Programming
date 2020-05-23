#include <iostream>
#include <algorithm>
#include <climits>

#define u unsigned
#define s short
#define ll long long
#define REP(i, a, b) for (auto i = (a); i < (b); i++)
#define REPR(i, a, b) for (auto i = (a-1); i >= (b); i--)

using namespace std;

void solve(u ll int N, u int A, u int B, u int C, u int D, u int x, u ll int pay, u ll int *best)
{
    if (x == 0)
        solve(N, A, B, C, D, x + 1, D, best);
    else if (x < N)
    {
        solve(N, A, B, C, D, x * 2, pay + A, best);
        solve(N, A, B, C, D, x * 3, pay + B, best);
        solve(N, A, B, C, D, x * 5, pay + C, best);
        solve(N, A, B, C, D, N, pay + (N - x) * D, best);
    }
    else if (x > N)
        solve(N, A, B, C, D, N, pay + (x - N) * D, best);
    else if (x == N)
        *best = min(*best, pay);
}

int main()
{
    u int T;
    cin >> T;

    REP(i, 0, T)
    {
        u ll int N;
        u int A, B, C, D;
        cin >> N >> A >> B >> C >> D;

        u ll int best = ULLONG_MAX;
        solve(N, A, B, C, D, 0, 0, &best);

        cout << best << "\n";
    }
}
