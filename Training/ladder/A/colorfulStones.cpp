#include <bits/stdc++.h>

#define REP(i, a, b) for (auto i = (a); i < (b); i++)
#define REPR(i, a, b) for (auto i = (a - 1); i >= (b); i--)

using namespace std;

void solve()
{
    string s; cin >> s;
    string t; cin >> t;

    int i = 0;
    int j = 0;

    int n = s.length();
    int m = t.length();

    while ((i < n - 1) and (j < m))
    {
        if (s[i] == t[j])
            i++;

        j++;
    }

    cout << i + 1 << "\n";
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

