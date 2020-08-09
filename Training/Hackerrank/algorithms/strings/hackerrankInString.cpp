#include <bits/stdc++.h>

#define REP(i, a, b) for (auto i = (a); i < (b); i++)
#define REPR(i, a, b) for (auto i = (a-1); i >= (b); i--)

using namespace std;

bool isContain(string s)
{
    string test = "hackerrank";

    int i = 0;
    for (char c: s)
    {
        if (i >= test.length())
            return 1;
        else
        {
            if (c == test[i])
                i++;
        }
    }

    if (i >= test.length())
        return 1;
    
    return 0;
}

void solve()
{
    string s; cin >> s;
    cout << (isContain(s) ? "YES" : "NO") << "\n";
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