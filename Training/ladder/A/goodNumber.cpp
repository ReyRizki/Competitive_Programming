#include <bits/stdc++.h>

#define ull unsigned long long
#define REP(i, a, b) for (auto i = (a); i < (b); i++)
#define REPR(i, a, b) for (auto i = (a-1); i >= (b); i--)

using namespace std;

bool check(vector<bool> v)
{
    for (auto x: v)
    {
        if (not x)
            return 0;
    }

    return 1;
}

void solve()
{
    int n, k; cin >> n >> k;

    int ans = 0;

    REP(i, 0, n)
    {
        vector<bool> exist(k + 1, 0);
        string s; cin >> s;

        for (auto x: s)
        {
            // cout << x - '0';
            exist[x - '0'] = 1;
        }
        // cout << "\n";

        if (check(exist))
        {
            ans++;
        }
        // ans += check(exist);
    }

    cout << ans << "\n";
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
