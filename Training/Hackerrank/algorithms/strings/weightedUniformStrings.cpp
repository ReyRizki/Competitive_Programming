#include <bits/stdc++.h>

#define REP(i, a, b) for (auto i = (a); i < (b); i++)
#define REPR(i, a, b) for (auto i = (a-1); i >= (b); i--)

using namespace std;

void solve()
{
    string s; cin >> s;
    vector<bool> v(10000001, false);

    char prev = 0;
    int streak = 1;
    for (char c: s)
    {
        if (c == prev)
            streak++;
        else
        {
            streak = 1;
            prev = c;
        }

        v[streak * (c - 'a' + 1)] = 1;
    }

    int q; cin >> q;
    while (q--)
    {
        int x; cin >> x;
        cout << (v[x] ? "Yes" : "No") << "\n";
    }
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