#include <bits/stdc++.h>

#define REP(i, a, b) for (auto i = (a); i < (b); i++)
#define REPR(i, a, b) for (auto i = (a - 1); i >= (b); i--)

using namespace std;

long long divCeil(long long a, long long b)
{
    long long res = a / b;
    return (a / b + (a % b != 0));
}

void solve()
{
    long long n, m, a; cin >> n >> m >> a;

    cout << (divCeil(n, a) * divCeil(m, a)) << "\n";
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
