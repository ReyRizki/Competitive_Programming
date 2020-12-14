#include <bits/stdc++.h>

#define ull unsigned long long
#define REP(i, a, b) for (auto i = (a); i < (b); i++)
#define REPR(i, a, b) for (auto i = (a-1); i >= (b); i--)

using namespace std;

void solve()
{
    int n, u; cin >> n >> u;

    bool good = 1;
    REP(i, 0, n)
    {
        int x, y; cin >> x >> y;

        if ((x == u) or (x == 7 - u) or (y == u) or (y == 7 - u))
            good = 0;
    }

    cout << (good ? "YES" : "NO") << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1; // cin >> t;

    while (t--)
        solve();

    return 0;
}
