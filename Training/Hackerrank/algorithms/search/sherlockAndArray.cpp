#include <bits/stdc++.h>

#define REP(i, a, b) for (auto i = (a); i < (b); i++)
#define REPR(i, a, b) for (auto i = (a-1); i >= (b); i--)

using namespace std;

bool check(vector<int> v)
{
    int l = 0, r = accumulate(v.begin(), v.end(), 0);

    for (auto it = v.begin(); it != v.end(); ++it)
    {
        r -= *it;

        if (l == r)
            return 1;

        l += *it;
    }

    return 0;
}

void solve()
{
    int n; cin >> n;
    vector<int> v(n);

    REP(i, 0, n)
    {
        int x; cin >> x;
        v[i] = x;
    }

    cout << (check(v) ? "YES" : "NO") << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1; cin >> t;

    while (t--)
        solve();

    return 0;
}