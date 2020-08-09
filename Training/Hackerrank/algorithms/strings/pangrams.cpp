#include <bits/stdc++.h>

#define REP(i, a, b) for (auto i = (a); i < (b); i++)
#define REPR(i, a, b) for (auto i = (a-1); i >= (b); i--)

using namespace std;

bool check(vector<int> v)
{
    for (auto i = v.begin(); i != v.end(); ++i)
        if (*i == 0)
            return 0;

    return 1;
}

void solve()
{
    string s; getline(cin, s);

    vector<int> v(26, 0);
    for (char c: s)
        if (c != ' ')
            v[tolower(c) - 'a']++;

    cout << (check(v) ? "" : "not ") << "pangram\n";
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