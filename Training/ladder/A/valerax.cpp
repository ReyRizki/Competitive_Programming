#include <bits/stdc++.h>

#define REP(i, a, b) for (auto i = (a); i < (b); i++)
#define REPR(i, a, b) for (auto i = (a - 1); i >= (b); i--)

using namespace std;

bool check(vector<string> v, int n)
{
    n--;
    REP(i, 0, (n / 2) + 1)
        if (v[i][i] != v[0][0])
            return 0;

    REP(i, 0, (n / 2) + 1)
    {
        REP(j, 0, (n / 2) + 1)
        {
            // cout << v[i][j];
            if ((v[i][j] != v[i][n - j]) or (v[i][j] != v[n - i][n - j]) or (v[i][j] != v[n - i][j]))
                return 0;
        }
        // cout << "\n";
    }

    return v[0][0] != v[0][1];
}

void solve()
{
    int n; cin >> n;

    vector<string> v;

    REP(i, 0, n)
    {
        string s; cin >> s;

        v.push_back(s);
    }

    cout << (check(v, n) ? "YES" : "NO") << "\n"; 
}   

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // freopen("in.txt", "r", stdin);
    // freopen("out.txt", "w", stdout);

    int t = 1; // cin >> t
    while (t--)
        solve();
    
    return 0;
}