#include <bits/stdc++.h>

#define REP(i, a, b) for (auto i = (a); i < (b); i++)
#define REPR(i, a, b) for (auto i = (a - 1); i >= (b); i--)

using namespace std;

int stringCompare(string s, string t)
{
    int n = s.length();

    REP(i, 0, n)
    {
        if (tolower(s[i]) < tolower(t[i]))
            return -1;
        else if (tolower(s[i]) > tolower(t[i]))
            return 1;
    }

    return 0;
}

void solve()
{
    string s, t; cin >> s >> t;

    cout << stringCompare(s, t) << "\n";
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

