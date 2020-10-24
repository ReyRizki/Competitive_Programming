#include <bits/stdc++.h>

#define REP(i, a, b) for (auto i = (a); i < (b); i++)
#define REPR(i, a, b) for (auto i = (a-1); i >= (b); i--)

using namespace std;

void solve()
{
    int n, k; cin >> n >> k;

    int result = 0;
    vector<int> v;

    REP(i, 0, n)
    {
        int l, t; cin >> l >> t;

        if (t)
            v.push_back(l);
        else
            result += l;
    }

    sort(v.begin(), v.end(), greater<int>());

    REP(i, 0, v.size())
    {
        if (i < k)
            result += v[i];
        else
            result -= v[i];
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
