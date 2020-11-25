#include <bits/stdc++.h>

#define ull unsigned long long
#define REP(i, a, b) for (auto i = (a); i < (b); i++)
#define REPR(i, a, b) for (auto i = (a-1); i >= (b); i--)

using namespace std;

int index(map<int, vector<int>> m)
{
    for (auto it = m.begin(); it != m.end(); ++it)
    {
        if ((it->second).size() == 1)
            return (it->second).front();
    }

    return -1;
}

void solve()
{
    int n; cin >> n;

    map<int, vector<int>> m;

    REP(i, 0, n)
    {
        int x; cin >> x;

        m[x].push_back(i);
    }

    int result = index(m);
    cout << (result == -1 ? -1 : result + 1) << "\n";
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
