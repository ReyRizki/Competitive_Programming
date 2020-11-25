#include <iostream>
#include <cstdlib>

#define u unsigned
#define s short
#define ll long long
#define REP(i, a, b) for (int i = (a); i < (b); i++)
#define REPR(i, a, b) for (int i = (a-1); i >= (b); i--)

using namespace std;

u int randomize(u int D)
{
    return rand() % D;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    srand(time(NULL));

    u int T;
    cin >> T;

    REP(i, 0, T)
    {
        u int N, D;
        cin >> N >> D;

        REP(j, 0, N)
            cout << randomize(D) << ((j == N - 1) ? "\n" : " ");
    }

    return 0;
}