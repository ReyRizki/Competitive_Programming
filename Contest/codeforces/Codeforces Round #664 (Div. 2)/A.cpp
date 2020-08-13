#include <bits/stdc++.h>

#define REP(i, a, b) for (auto i = (a); i < (b); i++)
#define REPR(i, a, b) for (auto i = (a-1); i >= (b); i--)

using namespace std;

void solve()
{
    vector<int> v;
    int even = 0;
    REP(i, 0, 4)
    {
        int x; cin >> x;
        v.push_back(x);
        if (x % 2 == 0)
            even++;
    }

    if ((even == 2) or ((even == 1) and (find(v.begin(), v.end() - 1, 0) != v.begin() + 3)))
        cout << "NO";
    else
        cout << "YES";
    cout << "\n";
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