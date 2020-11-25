#include <bits/stdc++.h>

#define REP(i, a, b) for (auto i = (a); i < (b); i++)
#define REPR(i, a, b) for (auto i = (a - 1); i >= (b); i--)

using namespace std;

int minBuy(int k, int r)
{
    REP(i, 1, 11)
        if (((k * i) % 10 == 0) or ((k * i) % 10 == r))
            return i;

    return 10;
}

void solve()
{
    int k, r; cin >> k >> r;

    cout << minBuy(k, r) << "\n";
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

