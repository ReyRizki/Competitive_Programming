#include <bits/stdc++.h>

#define REP(i, a, b) for (auto i = (a); i < (b); i++)
#define REPR(i, a, b) for (auto i = (a - 1); i >= (b); i--)

using namespace std;

bool check(map<char, int> m)
{
    REP(i, 0, 26)
        if (m['a' + i] == 0)
            return 0;

    return 1;
}

void solve()
{
    int n; cin >> n;

    map<char, int> m;

    REP(i, 0, 26)
        m['a' + i] = 0;

    string s; cin >> s;

    for (char x: s)
        m[tolower(x)]++;

    cout << (check(m) ? "YES" : "NO") << "\n";
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