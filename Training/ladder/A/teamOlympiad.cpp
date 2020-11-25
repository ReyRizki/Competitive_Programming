#include <bits/stdc++.h>

#define ll long long
#define REP(i, a, b) for (auto i = (a); i < (b); i++)
#define REPR(i, a, b) for (auto i = (a - 1); i >= (b); i--)

using namespace std;

void solve()
{
    int n; cin >> n;

    map<int, vector<int>> m;

    REP(i, 0, n)
    {
        int x; cin >> x;

        m[x].push_back(i + 1);
    }

    int num = min(min(m[1].size(), m[2].size()), m[3].size());
    cout << num << "\n";
    REP(i, 0, num)
    {
        REP(j, 1, 4)
            cout << m[j][i] << " ";
        cout << "\n";
    }
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

