#include <bits/stdc++.h>

#define ull unsigned long long
#define ll long long
#define REP(i, a, b) for (auto i = (a); i < (b); i++)
#define REPR(i, a, b) for (auto i = (a - 1); i >= (b); i--)

using namespace std;

void solve()
{
    int n, f; cin >> n >> f;

    vector<int> k(n), l(n);
    vector<pair<int, int>> a;

    for (int i = 0; i < n; i++) {
        cin >> k[i] >> l[i];
        a.push_back(make_pair(min(2 * k[i], l[i]) - min(k[i], l[i]), i));
    }
    sort(a.rbegin(), a.rend());    

    long long ans = 0;
    for (int i = 0; i < f; i++) {
        int pos = a[i].second;
        ans += min(2 * k[pos], l[pos]);
    }

    for (int i = f; i < n; i++) {
        int pos = a[i].second;
        ans += min(k[pos], l[pos]);
    }
    cout << ans << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // freopen("in.txt", "r", stdin);
    // freopen("out.txt", "w", stdout);

    int t = 1; // cin >> t;
    while (t--)
        solve();

    return 0;
}
