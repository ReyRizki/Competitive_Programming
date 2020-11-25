#include <bits/stdc++.h>

#define REP(i, a, b) for (auto i = (a); i < (b); i++)
#define REPR(i, a, b) for (auto i = (a - 1); i >= (b); i--)

using namespace std;

void solve()
{
    vector<int> a;

    REP(i, 0, 4)
    {
        int x; cin >> x;

        a.push_back(x);
    }

    // for (auto it = a.begin(); it != a.end(); ++it)
    //     cout << *it << " ";

    string s; cin >> s;

    int result = 0;
    for (char c: s)
        result += a[c - '0' - 1];

    cout << result << "\n";
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

