#include <bits/stdc++.h>

#define ull unsigned long long
#define ll long long
#define REP(i, a, b) for (auto i = (a); i < (b); i++)
#define REPR(i, a, b) for (auto i = (a-1); i >= (b); i--)

using namespace std;

void solve()
{
    int n; cin >> n;
    string s; cin >> s;
    
    string t;

    for (char x: s)
    {
        t.push_back(x);

        if ((t.length() >= 3) and (t.substr(t.length() - 3, 3) == "fox"))
            t.erase(t.length() - 3, 3);
    }

    cout << t.length() << "\n";
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
