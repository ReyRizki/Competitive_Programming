#include <bits/stdc++.h>

#define REP(i, a, b) for (auto i = (a); i < (b); i++)
#define REPR(i, a, b) for (auto i = (a-1); i >= (b); i--)

using namespace std;

void solve()
{
    long long int n, m; cin >> n >> m;

    long long int result = 0;

    REP(i, 0, m)
    {
        long long int a, b, k; cin >> a >> b >> k;

        result += (b - a + 1) * k;
    }

    cout << result / n << "\n";
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