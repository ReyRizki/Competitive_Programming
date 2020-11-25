#include <bits/stdc++.h>

#define REP(i, a, b) for (auto i = (a); i < (b); i++)
#define REPR(i, a, b) for (auto i = (a-1); i >= (b); i--)

using namespace std;

void solve()
{
    int m; cin >> m;
    int n; cin >> n;

    map<int, vector<int>> cost;

    REP(i, 0, n)
    {
        int x; cin >> x;

        if (x < m)
            cost[x].push_back(i + 1);
    }

    REP(i, 1, (m / 2) + 1)
    {
        int rem = m - i;

        if ((rem == i) and (cost[i].size() >= 2))
        {
            cout << cost[i][0] << " " << cost[i][1] << "\n";
            break;
        }
        else if (not (cost[i].empty() or cost[rem].empty()))
        {
            if (cost[i][0] > cost[rem][0])
                cout << cost[rem][0] << " " << cost[i][0] << "\n";    
            else 
                cout << cost[i][0] << " " << cost[rem][0] << "\n";
            break;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;

    while (t--)
        solve();

    return 0;
}