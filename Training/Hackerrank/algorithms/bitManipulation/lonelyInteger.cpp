#include <bits/stdc++.h>

#define REP(i, a, b) for (auto i = (a); i < (b); i++)
#define REPR(i, a, b) for (auto i = (a-1); i >= (b); i--)

using namespace std;

int result(map<int, int> m)
{
    for (auto it = m.begin(); it != m.end(); ++it)
        if (it->second == 1)
            return it->first;

    return -1;
}

void solve()
{
    int n; cin >> n;

    map<int, int> m;

    REP(i, 0, n)
    {
        int x; cin >> x;

        m[x]++;
    }

    cout << result(m) << "\n";
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
