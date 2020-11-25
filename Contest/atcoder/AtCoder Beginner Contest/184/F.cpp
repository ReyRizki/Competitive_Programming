#include <bits/stdc++.h>

#define ull unsigned long long
#define REP(i, a, b) for (auto i = (a); i < (b); i++)
#define REPR(i, a, b) for (auto i = (a-1); i >= (b); i--)

using namespace std;

void solve()
{
    int n; ull t; cin >> n >> t;
    vector<ull> v(n);

    REP(i, 0, n)
        cin >> v[i];

    vector<ull> p, q;
    p.push_back(0);
    q.push_back(0);

    // for (auto x: v)
        // cout << x << " ";
    // cout << "\n";

    REP(i, 0, n)
    {
        for (int j = p.size() - 1; j >= 0; j--)
            p.push_back(p[j] + v[i]);
        swap(p, q);
    }

    // for (auto x: p)
        // cout << x << " ";
    // cout << "\n";

    sort(p.begin(), p.end());

    ull result = 0;
    for(auto x: q)
    {
        if (x > t)
            continue;

        int si = upper_bound(p.begin(), p.end(), t - x) - p.begin();
        result = max(result, x + p[si - 1]);
    }

    cout << result << "\n";
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
