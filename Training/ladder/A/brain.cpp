#include <bits/stdc++.h>

#define REP(i, a, b) for (auto i = (a); i < (b); i++)
#define REPR(i, a, b) for (auto i = (a - 1); i >= (b); i--)

using namespace std;

void solve()
{
    int n, m; cin >> n >> m;

    bool good = 1;

    REP(i, 0, n)
    {
        REP(i, 0, m)
        {
            char x; cin >> x;

            if ((x == 'C') or (x == 'Y') or (x == 'M'))
                good = 0;
        }
    }

    cout << (good ? "#Black&White" : "#Color") << "\n";
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