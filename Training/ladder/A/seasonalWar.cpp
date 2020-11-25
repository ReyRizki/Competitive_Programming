#include <bits/stdc++.h>

#define REP(i, a, b) for (auto i = (a); i < (b); i++)
#define REPR(i, a, b) for (auto i = (a - 1); i >= (b); i--)

using namespace std;

void detectEagle(int i, int j, int n, vector<vector<int>> &v)
{
    if ((i < 0) or (j < 0) or (i >= n) or (j >= n) or (v[i][j] == 0))
        return;
    
    v[i][j] = 0;

    detectEagle(i + 1, j, n, v);
    detectEagle(i - 1, j, n, v);
    detectEagle(i, j + 1, n, v);
    detectEagle(i, j - 1, n, v);
    detectEagle(i + 1, j + 1, n, v);
    detectEagle(i + 1, j - 1, n, v);
    detectEagle(i - 1, j + 1, n, v);
    detectEagle(i - 1, j - 1, n, v);
}

void solve(int n)
{
    vector<vector<int>> v;
    // cout << n << "\n";
    REP(i, 0, n)
    {
        string s; cin >> s;

        vector<int> w;
        for (char x: s)
            w.push_back(x - '0');

        v.push_back(w);
    }

    int count = 0;
    REP(i, 0, n)
    {
        REP(j, 0, n)
        {
            if (v[i][j] == 1)
            {
                count++;
                detectEagle(i, j, n, v);
            }
        }
    }

    // detectEagle(0, 3, n, v);

    // REP(i, 0, n)
    // {
    //     REP(j, 0, n)
    //         cout << v[i][j];
    //     cout << "\n";
    // }
    cout << count;
}   

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // freopen("in.txt", "r", stdin);
    // freopen("out.txt", "w", stdout);

    int n;
    int i = 0;
    while (cin >> n)
    {
        cout << "Image number " << i + 1 << " contains ";
        solve(n);
        cout << " war eagles.\n";

        i++;
    }

    return 0;
}