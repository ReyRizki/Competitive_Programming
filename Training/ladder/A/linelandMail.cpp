#include <bits/stdc++.h>

#define REP(i, a, b) for (auto i = (a); i < (b); i++)
#define REPR(i, a, b) for (auto i = (a - 1); i >= (b); i--)

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

    REP(i, 0, n)
    {
        if (i == 0)
            cout << abs(v[i + 1] - v[i]) << " " << abs(v[n - 1] - v[i]) << "\n";
        else if (i == (n - 1))
            cout << abs(v[i - 1] - v[i]) << " " << abs(v[0] - v[i]) << "\n";
        else
            cout << min(abs(v[i - 1] - v[i]), abs(v[i + 1] - v[i])) << " " << max(abs(v[0] - v[i]), abs(v[n - 1] - v[i])) << "\n";
    }
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

