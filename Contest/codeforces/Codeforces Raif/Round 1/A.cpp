#include <bits/stdc++.h>

#include <bits/stdc++.h>

#define REP(i, a, b) for (auto i = (a); i < (b); i++)
#define REPR(i, a, b) for (auto i = (a-1); i >= (b); i--)

using namespace std;

void solve()
{
    int x1, y1, x2, y2; cin >> x1 >> y1 >> x2 >> y2;

    int xd = abs(x2 - x1);
    int yd = abs(y2 - y1);
    int m = 0;

    if (yd != 0)
        m = 2;

    cout << xd + yd + m << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;

    while (t--)
        solve();

    return 0;
}