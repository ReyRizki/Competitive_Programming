#include <bits/stdc++.h>

#define REP(i, a, b) for (auto i = (a); i < (b); i++)
#define REPR(i, a, b) for (auto i = (a - 1); i >= (b); i--)

using namespace std;

long long int GetDiagonalSum(const vector<vector<int>> &coins, int i, int j)
{
    long long int currval = 0;
    int currx = i, curry = j;
    while (currx < coins.size() && curry < coins[0].size())
    {
        currval += coins[currx][curry];
        currx++;
        curry++;
    }
    return currval;
}

long long int GetMaximumCoins(const vector<vector<int>> &coins)
{
    long long int answer = 0;
    // Top row.
    for (int i = 0; i < coins[0].size(); i++)
        answer = max(answer, GetDiagonalSum(coins, 0, i));
    // Left column.
    for (int i = 0; i < coins.size(); i++)
        answer = max(answer, GetDiagonalSum(coins, i, 0));
    return answer;
}

void solve()
{
    int n;
    cin >> n;

    vector<vector<int>> v(n);

    REP(i, 0, n)
    {
        v[i] = vector<int>(n);

        REP(j, 0, n)
        cin >> v[i][j];
    }

    cout << GetMaximumCoins(v) << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    cin >> t;

    REP(i, 0, t)
    {
        cout << "Case #" << i + 1 << ": ";
        solve();
    }

    return 0;
}