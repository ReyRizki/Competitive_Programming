#include <bits/stdc++.h>

#define REP(i, a, b) for (auto i = (a); i < (b); i++)
#define REPR(i, a, b) for (auto i = (a-1); i >= (b); i--)

using namespace std;

void solve()
{
    vector<int> a(6);

    REP(i, 0, 6)
        cin >> a[i];

    int n; cin >> n;
    vector<int> v(n);

    REP(i, 0, n)
        cin >> v[i];

    sort(a.begin(), a.end());
    sort(v.begin(), v.end());

    cout << (v.back() - a.back()) - (v.front() - a.front()) << "\n";
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