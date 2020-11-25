#include <bits/stdc++.h>

#define REP(i, a, b) for (auto i = (a); i < (b); i++)
#define REPR(i, a, b) for (auto i = (a - 1); i >= (b); i--)

using namespace std;

bool isShipExist(int i, int j, int n, vector<string> &v)
{
    if ((i < 0) or (j < 0) or (i >= n) or (j >= n) or (v[i][j] == '.'))
        return false;
    
    bool result = (v[i][j] == 'x');
    v[i][j] = '.';

    // cout << i << ' ' << j << "\n";
    // for (auto x: v)
    //     cout << x << "\n";
    // cout << "\n";

    result = isShipExist(i + 1, j, n, v) || result;
    result = isShipExist(i - 1, j, n, v) || result;
    result = isShipExist(i, j + 1, n, v) || result;
    result = isShipExist(i, j - 1, n, v) || result;

    return result;
}

void solve()
{
    int n; cin >> n;

    vector<string> mat;
    REP(i, 0, n)
    {
        string s; cin >> s;

        mat.push_back(s);
    }

    int result = 0;

    // vector<vector<bool>> visited;

    // REP(i, 0, n)
    //     REP(j, 0, n)


    REP(i, 0, n)
    {
        REP(j, 0, n)
        {
            if (mat[i][j] != '.' and isShipExist(i, j, n, mat))
            {
                // cout << i << " " << j << "\n";

                // for (auto x:mat)
                //     cout << x << "\n";
                // cout << "\n";
                result++;

            }

        }

    }

    // for (auto x:mat)
    //     cout << x << "\n";

    cout << result << "\n";
}   

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // freopen("in.txt", "r", stdin);
    // freopen("out.txt", "w", stdout);

    int t; cin >> t;
    REP(i, 0, t)
    {
        cout << "Case " << i + 1 << ": ";
        solve();
    }
    
    return 0;
}