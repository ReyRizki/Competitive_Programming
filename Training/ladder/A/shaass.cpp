#include <bits/stdc++.h>

#define REP(i, a, b) for (auto i = (a); i < (b); i++)
#define REPR(i, a, b) for (auto i = (a - 1); i >= (b); i--)

using namespace std;

void solve()
{
    int n; cin >> n; 
    vector<int> v;

    REP(i, 0, n)
    {
        int x; cin >> x;

        v.push_back(x);
    }

    int m; cin >> m;
    // cout << a << "\n";
    REP(i, 0, m)
    {
        int x, y; cin >> x >> y;
        // cout << "yeehaw\n";


        if (x != 1)
            v[x - 2] += y - 1;
        
        if (x != n)
            v[x] += v[x - 1] - y;

        v[x - 1] = 0;
    }

    for (auto it = v.begin(); it != v.end(); ++it)
        cout << *it << "\n";
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

