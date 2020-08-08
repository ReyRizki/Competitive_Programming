#include <bits/stdc++.h>

#define REP(i, a, b) for (auto i = (a); i < (b); i++)
#define REPR(i, a, b) for (auto i = (a-1); i >= (b); i--)

using namespace std;

string reduceString(string s)
{
    int i = 0;
    while (i < s.length())
    {
        if ((i < s.length() - 1) and (s[i] == s[i + 1]))
        {
            s.erase(i, 2);
            s = reduceString(s);
        }
        else
            i++;
    }

    return s;
}

void solve()
{
    string s; cin >> s;
    int len = s.length();

    string result = reduceString(s);

    cout << (result.length() == 0 ? "Empty String" : result) << "\n";
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