#include <bits/stdc++.h>

#define ll long long
#define REP(i, a, b) for (auto i = (a); i < (b); i++)
#define REPR(i, a, b) for (auto i = (a - 1); i >= (b); i--)

using namespace std;

void solve()
{
    int n; cin >> n;
    string colors = "ROYGBIV";

    int r = n % 7;
    int d = n / 7;

    REP(i, 0, d - 1)
        cout << colors;

    if (r < 4)
        cout << colors.substr(0, r + 3) << colors.substr(0, r) << colors.substr(3 + r, 4 - r);
    else
        cout << colors << colors.substr(0, r);
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