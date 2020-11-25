#include <bits/stdc++.h>

#define ll long long
#define REP(i, a, b) for (auto i = (a); i < (b); i++)
#define REPR(i, a, b) for (auto i = (a - 1); i >= (b); i--)

using namespace std;

void solve()
{
    string s; cin >> s;

    vector<int> v;

    for (char c: s)
    {
        if ((c >= '1') and (c <= '9'))
            v.push_back(c - '0');
    }

    sort(v.begin(), v.end());

    for (auto it = v.begin(); it != v.end(); ++it)
    {
        cout << *it;

        if (next(it, 1) != v.end())
            cout << '+';
        else
            cout << "\n";
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

