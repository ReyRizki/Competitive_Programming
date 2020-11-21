#include <bits/stdc++.h>

#define REP(i, a, b) for (auto i = (a); i < (b); i++)
#define REPR(i, a, b) for (auto i = (a - 1); i >= (b); i--)

using namespace std;

void solve()
{
    int x = 0, y;

    REP(i, 0, 5)
    {
        REP(j, 0, 5)
        {
            bool in; cin >> in;
            
            if (in)
            {
                x += i;
                y = j;
            }
        }
    }

    cout << abs(x - 2) + abs(y - 2) << "\n";
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

