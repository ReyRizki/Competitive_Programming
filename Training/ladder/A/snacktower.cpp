#include <bits/stdc++.h>

#define REP(i, a, b) for (auto i = (a); i < (b); i++)
#define REPR(i, a, b) for (auto i = (a - 1); i >= (b); i--)

using namespace std;

void solve()
{
    int n; cin >> n;

    vector<bool> v(n, 0);

    int target = n;

    REP(i, 0, n)
    {
        int x; cin >> x;

        v[x - 1] = 1;

        while ((target > 0) and (v[target - 1]))
        {
            cout << target << " ";
            target--;
        }
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

