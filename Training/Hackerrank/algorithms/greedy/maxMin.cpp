#include <bits/stdc++.h>

#define REP(i, a, b) for (auto i = (a); i < (b); i++)
#define REPR(i, a, b) for (auto i = (a - 1); i >= (b); i--)

using namespace std;

void solve()
{
    int n, k; cin >> n >> k;

    vector<int> v(n);

    REP(i, 0, n)
        cin >> v[i];

    sort(v.begin(), v.end());

    int result = v[k - 1] - v[0];

    REP(i, 0, n - k + 1)
        result = min(result, v[i + k - 1] - v[i]);

    cout << result << "\n";
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
