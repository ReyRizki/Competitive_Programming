#include <bits/stdc++.h>

#define ull unsigned long long
#define REP(i, a, b) for (auto i = (a); i < (b); i++)
#define REPR(i, a, b) for (auto i = (a-1); i >= (b); i--)

using namespace std;

void solve()
{
    long long n, m; cin >> n >> m;

    long long baseN = n / 5, baseM = m / 5, remN = n % 5, remM = m % 5;

    long long ans = 0;
    REP(i, 1, 5)
        ans += (baseN + (i <= remN)) * (baseM + ((5 - i) <= remM));

    ans += baseN * baseM;

    cout << ans << "\n";
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
