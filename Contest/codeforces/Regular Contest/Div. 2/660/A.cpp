#include <bits/stdc++.h>

#define REP(i, a, b) for (auto i = (a); i < (b); i++)
#define REPR(i, a, b) for (auto i = (a-1); i >= (b); i--)

using namespace std;

void solve()
{
    int n; cin >> n;
    if (n <= 30)
        cout << "NO\n";
    else
    {
        cout << "YES\n6 10 ";
        if ((n == 36) or (n == 40) or (n == 44))
            cout << "15 " << n - 31 << "\n";
        else
            cout << "14 " << n - 30 << "\n";
    }
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