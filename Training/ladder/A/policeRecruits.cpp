#include <bits/stdc++.h>

#define REP(i, a, b) for (auto i = (a); i < (b); i++)
#define REPR(i, a, b) for (auto i = (a - 1); i >= (b); i--)

using namespace std;

void solve()
{
    int n; cin >> n;

    int police = 0;
    int untreated = 0;

    REP(i, 0, n)
    {
        int x; cin >> x;

        if (x == -1)
        {
            if (police == 0)
                untreated++;
            else
                police--;
        }
        else
            police += x;
    }

    cout << untreated << "\n";
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

