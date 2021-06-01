#include <bits/stdc++.h>

#define ll long long
#define ull unsigned long long
#define f first
#define s second
#define REP(i, a, b) for (auto i = (a); i < (b); i++)
#define REPR(i, a, b) for (auto i = (a-1); i >= (b); i--)

using namespace std;

void solve()
{
    int n; cin >> n;

    REP(i, 0, n) {
        int x; cin >> x;
    }

    cout << 3 * n << "\n";
    REP(i, 0, n / 2) {
        REP(j, 0, 3) {
            REP(k, 0, 2) {
                cout << k + 1 << " " << (i + 1) * 2 - 1 << " " << (i + 1) * 2 << "\n";
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int t = 1; cin >> t;

    while (t--)
        solve();

    return 0;
}
