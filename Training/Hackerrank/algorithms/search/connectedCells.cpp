#include <bits/stdc++.h>

#define REP(i, a, b) for (auto i = (a); i < (b); i++)
#define REPR(i, a, b) for (auto i = (a-1); i >= (b); i--)

using namespace std;

int floodFill(vector<vector<bool>> &v, int i, int j, int n, int m)
{
    int count = 0;

    if ((i >= 0) and (i < n) and (j >= 0) and (j < m) and (v[i][j]))
    {
        v[i][j] = 0;
        count++;
        count += floodFill(v, i - 1, j, n, m);
        count += floodFill(v, i, j + 1, n, m);
        count += floodFill(v, i + 1, j, n, m);
        count += floodFill(v, i, j - 1, n, m);
        count += floodFill(v, i - 1, j + 1, n, m);
        count += floodFill(v, i + 1, j + 1, n, m);
        count += floodFill(v, i + 1, j - 1, n, m);
        count += floodFill(v, i - 1, j - 1, n, m);
    }

    return count;
}

void solve()
{
    int n, m; cin >> n >> m;

    vector<vector<bool>> v(n);
    
    REP(i, 0, n)
    {
        REP(j, 0, m)
        {
            bool x; cin >> x;
            v[i].push_back(x);
        }
    }

    int result = 0;

    REP(i, 0, n)
        REP(j, 0, m)
            result = max(result, floodFill(v, i, j, n, m));

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