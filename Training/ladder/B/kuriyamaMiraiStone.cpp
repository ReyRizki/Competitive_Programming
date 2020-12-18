#include <bits/stdc++.h>

#define ull unsigned long long
#define ll long long
#define REP(i, a, b) for (auto i = (a); i < (b); i++)
#define REPR(i, a, b) for (auto i = (a - 1); i >= (b); i--)

using namespace std;

void solve()
{
    int n; cin >> n;
    
    vector<ll> v;
    REP(i, 0, n)
    {
        ll x; cin >> x;

        v.push_back(x);
    }

    vector<ll> ans;
    ans.push_back(v[0]);
    REP(i, 1, n)
        ans.push_back(ans[i - 1] + v[i]);

    sort(v.begin(), v.end());
    vector<ll> ans2;
    ans2.push_back(v[0]);
    REP(i, 1, n)
        ans2.push_back(ans2[i - 1] + v[i]);

    // for (auto x: ans)
    //     cout << x << " ";
    // cout << "\n";

    // for (auto x: ans2)
    //     cout << x << " ";
    // cout << "\n";

    int m; cin >> m;
    REP(i, 0, m)
    {
        int t, l, r; cin >> t >> l >> r;
        l--;
        r--;

        if (t == 1)
        {
            if (l == 0)
                cout << ans[r];
            else
                cout << ans[r] - ans[l - 1];
            cout << "\n";
        }
        else
        {
            if (l == 0)
                cout << ans2[r];
            else
                cout << ans2[r] - ans2[l - 1];
            cout << "\n";
        }
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
