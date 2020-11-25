#include <bits/stdc++.h>

#define REP(i, a, b) for (auto i = (a); i < (b); i++)
#define REPR(i, a, b) for (auto i = (a-1); i >= (b); i--)

using namespace std;

void solve()
{
    int n; cin >> n;

    vector<int> v;

    for (int i = 1; i * i <= n; i ++)
    {
        if (n % i == 0)
        {
            v.push_back(i);
        }
    }

    for (auto it = v.begin(); it != v.end(); ++it)
        cout << *it << "\n";

    for (auto it = v.rbegin(); it != v.rend(); ++it)
    {
        int x = n / *it;

        if (x != *it)
            cout << x << "\n";
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