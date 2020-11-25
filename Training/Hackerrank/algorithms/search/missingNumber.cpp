#include <bits/stdc++.h>

#define REP(i, a, b) for (auto i = (a); i < (b); i++)
#define REPR(i, a, b) for (auto i = (a-1); i >= (b); i--)

using namespace std;

void solve()
{
    int n; cin >> n;
    map<int, int> num;

    REP(i, 0, n)
    {
        int x; cin >> x;
        num[x]++;
    }

    int m; cin >> m;
    map<int, int> original;
    REP(i, 0, m)
    {
        int x; cin >> x;

        original[x]++;
    }

    for (auto it = original.begin(); it != original.end(); ++it)
        if ((it->second - num[it->first]) > 0)
            cout << it->first << " ";

    cout << "\n";
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