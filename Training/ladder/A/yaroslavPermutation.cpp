#include <bits/stdc++.h>

#define ull unsigned long long
#define REP(i, a, b) for (auto i = (a); i < (b); i++)
#define REPR(i, a, b) for (auto i = (a-1); i >= (b); i--)

using namespace std;

void solve()
{
    int n; cin >> n;

    map<int, int> m;

    REP(i, 0, n)
    {
        int x; cin >> x;

        m[x]++;
    }

    int target = (n + 1)/2;
    for (auto x: m)
    {
        if (x.second > target)
        {
            cout << "NO\n";
            return;
        }
    }

    cout << "YES\n";
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
