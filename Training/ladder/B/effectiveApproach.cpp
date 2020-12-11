#include <bits/stdc++.h>

#define ll long long
#define REP(i, a, b) for (auto i = (a); i < (b); i++)
#define REPR(i, a, b) for (auto i = (a - 1); i >= (b); i--)

using namespace std;

void solve()
{
    int n; cin >> n;
    vector<int> v(n);

    REP(i, 0, n)
    {
        int x; cin >> x;
        x--;

        v[x] = i;
    }

    int m; cin >> m;
    ll ans1 = 0, ans2 = 0;
    REP(i, 0, m)
    {
        int x; cin >> x;
        x--;

        ans1 += v[x] + 1;
        ans2 += n - v[x];
    }

    cout << ans1 << " " << ans2 << "\n";
}   

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // freopen("in.txt", "r", stdin);
    // freopen("out.txt", "w", stdout);

    int t = 1; // cin >> t
    while (t--)
        solve();
    
    return 0;
}