#include <bits/stdc++.h>

#define REP(i, a, b) for (auto i = (a); i < (b); i++)
#define REPR(i, a, b) for (auto i = (a-1); i >= (b); i--)

using namespace std;

void solve()
{
    int n; cin >> n;
    map<int, int> num;

    REP(i, 0, n)
    {
        int x; cin >> x;
        num[x]++;
    }

    int m; cin >> m;
    vector<int> result;
    REP(i, 0, m)
    {
        int x; cin >> x;

        if (num[x] != 0)
            num[x]--;
        else
            result.push_back(x);
    }

    sort(result.begin(), result.end());

    for (auto it = result.begin(); it != result.end(); ++it)
        cout << *it << " ";
    cout << "\n";
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