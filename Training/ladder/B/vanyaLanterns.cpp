#include <bits/stdc++.h>

#define ull unsigned long long
#define ll long long
#define REP(i, a, b) for (auto i = (a); i < (b); i++)
#define REPR(i, a, b) for (auto i = (a - 1); i >= (b); i--)

using namespace std;

void solve()
{
    int n, l; cin >> n >> l;

    vector<ll> v;
    REP(i, 0, n)
    {
        ll x; cin >> x;

        v.push_back(x);
    }

    sort(v.begin(), v.end());

    ll ans = 2 * max(v[0] - 0, l - v[n - 1]);

    REP(i, 0, n - 1)
        ans = max(ans, v[i + 1] - v[i]);

    cout << fixed << setprecision(9) << ((long double) ans) / 2 << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // freopen("in.txt", "r", stdin);
    // freopen("out.txt", "w", stdout);

    int t = 1; // cin >> t;
    while (t--)
        solve();

    return 0;
}
