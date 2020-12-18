#include <bits/stdc++.h>

#define ull unsigned long long
#define ll long long
#define REP(i, a, b) for (auto i = (a); i < (b); i++)
#define REPR(i, a, b) for (auto i = (a - 1); i >= (b); i--)

using namespace std;

void solve()
{
    ll n, m; int k, t; cin >> n >> m >> k >> t;

    vector<ll> v;
    REP(i, 0, k)
    {
        ll a, b; cin >> a >> b;

        v.push_back((a - 1) * m + b);
    }    

    sort(v.begin(), v.end());

    vector<string> frs = {"Grapes", "Carrots", "Kiwis"};
    REP(i, 0, t)
    {
        ll a, b; cin >> a >> b;

        ll f = (a - 1) * m + b;

        int pos = lower_bound(v.begin(), v.end(), f) - v.begin();

        if (f == v[pos])
            cout << "Waste";
        else
            cout << frs[(f - pos) % 3];
        cout << "\n";
    }
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
