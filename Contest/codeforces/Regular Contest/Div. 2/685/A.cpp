#include <bits/stdc++.h>

#define REP(i, a, b) for (auto i = (a); i < (b); i++)
#define REPR(i, a, b) for (auto i = (a-1); i >= (b); i--)

using namespace std;

int minimumChange(int n)
{
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0)
            return i;

    return -1;
}

void solve()
{
    int n; cin >> n;

    if (n <= 3)
        cout << n - 1;
    else
    {
        if (n & 1)
            cout << 3;
        else
            cout << 2;
    }

    cout << "\n";
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