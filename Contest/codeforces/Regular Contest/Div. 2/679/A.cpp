#include <bits/stdc++.h>

#define REP(i, a, b) for (auto i = (a); i < (b); i++)
#define REPR(i, a, b) for (auto i = (a-1); i >= (b); i--)

using namespace std;

void solve()
{
    int n; cin >> n;

    vector<int> v(n);

    REP(i, 0, n)
        cin >> v[i];

    REP(i, 0, n)
        cout << (i & 1 ? v[i - 1] : -v[i + 1]) << " ";
    
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