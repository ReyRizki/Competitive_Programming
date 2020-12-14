#include <bits/stdc++.h>

#define REP(i, a, b) for (auto i = (a); i < (b); i++)
#define REPR(i, a, b) for (auto i = (a - 1); i >= (b); i--)

using namespace std;

void solve()
{
    int n, t; cin >> n >> t;

    if (t == 10)
    {
        if (n == 1)
            cout << -1;
        else
        {
            cout << 1;

            REP(i, 0, n - 1)
                cout << 0;
        }
    }
    else
    {
        REP(i, 0, n)
            cout << t;
    }
    cout << "\n";
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