#include <bits/stdc++.h>

#define ull unsigned long long
#define ll long long
#define REP(i, a, b) for (auto i = (a); i < (b); i++)
#define REPR(i, a, b) for (auto i = (a - 1); i >= (b); i--)

using namespace std;

vector<int> dirX, dirY;

void floodFill(vector<string> &matrix, int n, int m, int x, int y, char c)
{
    if ((x >= 0) and (x < n) and (y >= 0) and (y < m) and (matrix[x][y] == c))
    {
        matrix[x][y] = '.';

        REP(i, 0, 4)
            floodFill(matrix, n, m, x + dirX[i], y + dirY[i], c);
    }
}

void solve()
{
    dirX.push_back(1);
    dirY.push_back(0);

    dirX.push_back(-1);
    dirY.push_back(0);
    
    dirX.push_back(0);
    dirY.push_back(1);
    
    dirX.push_back(0);
    dirY.push_back(-1);

    int n, m; char c; cin >> n >> m >> c;
    
    vector<string> matrix;
    vector<pair<int, int>> pDesk;
    
    REP(i, 0, n)
    {
        string x; cin >> x;

        REP(j, 0, m)
            if (x[j] == c)
                pDesk.push_back(make_pair(i, j));

        matrix.push_back(x);
    }

    // for (auto s: matrix)
    //     cout << s << "\n";

    int ans = 0;
    for (auto d: pDesk)
    {
        REP(i, 0, 4)
        {
            int x = d.first + dirX[i];
            int y = d.second + dirY[i];
            
            if ((x >= 0) and (x < n) and (y >= 0) and (y < m) and (matrix[x][y] != '.') and (matrix[x][y] != c))
            {
                ans++;
                floodFill(matrix, n, m, x, y, matrix[x][y]);
            }
        }
        // cout << x.first << " " << x.second << "\n";
    }

    cout << ans << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // freopen("in.txt", "r", stdin);
    // freopen("out.txt", "w", stdout);

    int t = 1; // cin >> t;
    while (t--)
        solve();

    return 0;
}
