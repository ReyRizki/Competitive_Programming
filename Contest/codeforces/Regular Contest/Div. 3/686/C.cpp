#include <bits/stdc++.h>

#define ull unsigned long long
#define REP(i, a, b) for (auto i = (a); i < (b); i++)
#define REPR(i, a, b) for (auto i = (a-1); i >= (b); i--)

using namespace std;

void solve()
{
    int n; cin >> n;

    vector<int> v;

    REP(i, 0, n)
    {
        int x; cin >> x;

        v.push_back(x);
    }

    vector<int> resv(n + 1, 1);

    n = unique(v.begin(), v.end()) - v.begin();
    v.resize(n);

    for (auto x: v)
        resv[x]++;

    resv[v[0]]--;
    resv[v[n - 1]]--;

    int result = 1e9;
    for (auto x: v)
        result = min(result, resv[x]);

    cout << result << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1; cin >> t;

    while (t--)
        solve();

    return 0;
}
