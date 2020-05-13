#include <iostream>

#define u unsigned
#define s short
#define ll long long
#define REP(i, a, b) for (int i = (a); i < (b); i++)
#define REPR(i, a, b) for (int i = (a-1); i >= (b); i--)

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    u int T;
    cin >> T;

    REP(i, 0, T)
    {
        u int N;
        u ll int D;
        cin >> N >> D;

        u ll int X[N];
        REP(j, 0, N)
            cin >> X[j];

        REPR(j, N, 0)
            X[j] *= ((j == N -1) ? (D/X[j]) : (X[j+1]/X[j]));

        cout << "Case #" << i + 1 << ": " << X[0] << "\n";
    }

    return 0;
}