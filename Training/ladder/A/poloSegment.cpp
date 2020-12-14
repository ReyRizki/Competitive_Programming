#include <bits/stdc++.h>

#define ull unsigned long long
#define REP(i, a, b) for (auto i = (a); i < (b); i++)
#define REPR(i, a, b) for (auto i = (a-1); i >= (b); i--)

using namespace std;

void solve()
{
    int n, k; cin >> n >> k;

    int x = 0;
    REP(i, 0, n)
    {
        int a, b; cin >> a >> b;

        x += b - a + 1;
    }

    cout << (x % k == 0 ? 0 : (k - (x % k))) << "\n";
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
