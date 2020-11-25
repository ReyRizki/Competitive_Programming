#include <bits/stdc++.h>

#define REP(i, a, b) for (auto i = (a); i < (b); i++)
#define REPR(i, a, b) for (auto i = (a-1); i >= (b); i--)

using namespace std;

void solve()
{
    int n, m; cin >> n >> m;

    vector<vector<bool>> supplied(n + 1);

    REP(i, 0, n + 1)
    {
        supplied[i] = vector<bool>(m + 1);
        REP(j, 0, m + 1)
        {
            supplied[i][j] = false;
        }
    }

    int count = 0;
    REP(i, 0, n)
    {
        REP(j, 0, m)
        {
            if ((i + 1 <= n) and (j + 1 <= m) and (not supplied[i][j]))
            {
                count++;
                supplied[i][j] = true;
                supplied[i + 1][j] = true;
                supplied[i][j + 1] = true;
                supplied[i + 1][j + 1] = true;
            }
        }
    }

    cout << count << "\n";
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