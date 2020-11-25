#include <bits/stdc++.h>

#define REP(i, a, b) for (auto i = (a); i < (b); i++)
#define REPR(i, a, b) for (auto i = (a - 1); i >= (b); i--)

using namespace std;

void solve()
{
    int n; cin >> n;

    map<int, int> m;

    REP(i, 0, n)
    {
        int x; cin >> x;

        m[x]++;
    }

    int result = n - (m.begin()->second) - (prev(m.end(), 1)->second);

    if (result <= 0)
        cout << 0;
    else
        cout << result;
    cout << "\n";
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