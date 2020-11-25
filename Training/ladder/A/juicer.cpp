#include <bits/stdc++.h>

#define REP(i, a, b) for (auto i = (a); i < (b); i++)
#define REPR(i, a, b) for (auto i = (a - 1); i >= (b); i--)

using namespace std;

void solve()
{
    int n, b, d; cin >> n >> b >> d;

    int waste = 0, result = 0;
    REP(i, 0, n)
    {
        int x; cin >> x;

        if (x <= b)
        {
            waste += x;
        }

        if (waste > d)
        {
            waste = 0;
            result++;
        }
    }

    cout << result << "\n";
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

