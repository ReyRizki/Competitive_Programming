#include <bits/stdc++.h>

#define ull unsigned long long
#define REP(i, a, b) for (auto i = (a); i < (b); i++)
#define REPR(i, a, b) for (auto i = (a-1); i >= (b); i--)

using namespace std;

void solve()
{
    double pi = 2 * acos(0.0);
    double d, h, v, e; cin >> d >> h >> v >> e;
    double result = h / (v / (pi * pow(d/2, 2)) - e);

    if ((result < 0) or (result > 10000))
        cout << "NO";
    else
    {
        cout << "YES\n";
        cout << fixed << setprecision(12)  << result << "\n";
    }
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
