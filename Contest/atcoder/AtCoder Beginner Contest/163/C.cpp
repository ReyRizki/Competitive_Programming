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

    u int N;

    cin >> N;

    u int M[N] = { 0 };

    REP(i, 1, N)
    {
        u int x;
        cin >> x;

        if (x > 0)
            M[x - 1]++;
    }

    REP(i, 0, N)
        cout << M[i] << "\n";
}