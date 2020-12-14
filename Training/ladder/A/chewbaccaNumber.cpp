#include <bits/stdc++.h>

#define ull unsigned long long
#define REP(i, a, b) for (auto i = (a); i < (b); i++)
#define REPR(i, a, b) for (auto i = (a-1); i >= (b); i--)

using namespace std;

void solve()
{
    string s; cin >> s;

    int n = s.length();
    for (int i = 0; i < n; i++)
    {
        int x = s[i] - '0';

        if ((i == 0) and (x == 9))
            cout << 9;
        else
            cout << (x > 4 ? 9 - x : x);
    }

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
