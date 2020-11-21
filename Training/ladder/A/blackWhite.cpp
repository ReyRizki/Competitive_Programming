#include <bits/stdc++.h>

#define ll long long
#define REP(i, a, b) for (auto i = (a); i < (b); i++)
#define REPR(i, a, b) for (auto i = (a - 1); i >= (b); i--)

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // freopen("in.txt", "r", stdin);
    // freopen("out.txt", "w", stdout);

    ll n, m, c;
    while ((cin >> n >> m >> c) and (n != 0))
        cout << ((n - 7) * (m - 7) + (c == 1)) / 2 << "\n";

    return 0;
}

