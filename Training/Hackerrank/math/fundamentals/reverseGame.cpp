#include <bits/stdc++.h>

#define REP(i, a, b) for (auto i = (a); i < (b); i++)
#define REPR(i, a, b) for (auto i = (a-1); i >= (b); i--)

using namespace std;

void solve()
{
    int n, k; cin >> n >> k;

    cout << ((k < n / 2) ? (1 + 2 * k) : (2 * (n - 1 - k))) << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1; cin >> t;
    // cout << t << "\n";
    while (t--)
        solve();

    return 0;
}