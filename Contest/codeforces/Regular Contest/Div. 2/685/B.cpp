#include <bits/stdc++.h>

#define REP(i, a, b) for (auto i = (a); i < (b); i++)
#define REPR(i, a, b) for (auto i = (a-1); i >= (b); i--)

using namespace std;

void solve()
{
    // int i = 0;

    // for (; i < 5; i++)
    //     cout << i << "\n";

    int n, q; cin >> n >> q;

    string s; cin >> s;

    REP(i, 0 , q)
    {
        int l, r; cin >> l >> r;
        l--; r--;

        bool bad = 1;

        for (int i = 0; (i < l) and bad; i++)
            if (s[i] == s[l])
                bad = 0;

        for (int i = r + 1; (i < n) and bad; i++)
            if (s[i] == s[r])
                bad = 0;

        cout << (bad ? "NO" : "YES") << "\n";
    }
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