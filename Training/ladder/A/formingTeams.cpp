#include <bits/stdc++.h>

#define ull unsigned long long
#define REP(i, a, b) for (auto i = (a); i < (b); i++)
#define REPR(i, a, b) for (auto i = (a-1); i >= (b); i--)

using namespace std;

bool dfs(int i, int par, int &count, vector<bool> &visited, vector<vector<int>> &v)
{
    if (visited[i])
        return 1;

    visited[i] = 1;

    for (auto x: v[i])
    {
        if (x != par)
        {
            count++;

            if (dfs(x, i, count, visited, v))
                return 1;
        }
    }

    return 0;
}

void solve()
{
    int n, k; cin >> n >> k;

    vector<vector<int>> v(n);
    vector<bool> visited(n, 0);

    REP(i, 0, k)
    {
        int x, y; cin >> x >> y;
        x--, y--;

        v[x].push_back(y);
        v[y].push_back(x);
    }

    int target = 0;
    REP(i, 0, n)
    {
        if (not visited[i])
        {
            int count = 0;

            if (dfs(i, -1, count, visited, v))
                target += (count & 1);
        }
    }

    if ((n - target) & 1)
        target++;

    cout << target << "\n";
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
