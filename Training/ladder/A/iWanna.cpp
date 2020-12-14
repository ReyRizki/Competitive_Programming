#include <bits/stdc++.h>

#define REP(i, a, b) for (auto i = (a); i < (b); i++)
#define REPR(i, a, b) for (auto i = (a - 1); i >= (b); i--)

using namespace std;

bool check(vector<bool> v)
{
    for (auto x: v)
        if (!x)
            return 0;

    return 1;
}

void solve()
{
    int n; cin >> n;

    vector<bool> v(n, 0);

    REP(i, 0, 2)
    {
        int p; cin >> p;

        REP(j, 0, p)
        {
            int x; cin >> x;

            v[x - 1] = 1;
        }
    }

    cout << (check(v) ? "I become the guy." : "Oh, my keyboard!") << "\n";
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