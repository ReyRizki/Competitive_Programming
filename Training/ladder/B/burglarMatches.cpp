#include <bits/stdc++.h>

#define ll long long
#define REP(i, a, b) for (auto i = (a); i < (b); i++)
#define REPR(i, a, b) for (auto i = (a - 1); i >= (b); i--)

using namespace std;

void solve()
{
    ll n; int m; cin >> n >> m;

    map<int, ll> matches;

    REP(i, 0, m)
    {
        ll a; int b; cin >> a >> b;

        matches[b] += a;
    }

    auto it = matches.rbegin();
    ll ans = 0;
    while ((n > 0) and (it != matches.rend()))
    {
        ll take = min(n, it->second);

        ans += it->first * take;
        n -= take;

        // cout << it->first << " " << it->second << "\n";
        ++it;
    }

    cout << ans << "\n";
}   

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1; // cin >> t
    while (t--)
        solve();
    
    return 0;
}