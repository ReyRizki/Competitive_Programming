#include <bits/stdc++.h>

#define REP(i, a, b) for (auto i = (a); i < (b); i++)
#define REPR(i, a, b) for (auto i = (a-1); i >= (b); i--)

using namespace std;

void solve()
{
    int px, py, qx, qy; cin >> px >> py >> qx >> qy;

    cout << -px + 2 * qx << " " << -py + 2 * qy << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1; cin >> t;

    while (t--)
        solve();

    return 0;
}