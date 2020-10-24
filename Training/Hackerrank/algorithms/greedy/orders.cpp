#include <bits/stdc++.h>

#define REP(i, a, b) for (auto i = (a); i < (b); i++)
#define REPR(i, a, b) for (auto i = (a-1); i >= (b); i--)

using namespace std;

bool comparator(pair<int, int> a, pair<int, int> b)
{
    if (a.second != b.second)
        return a.second < b.second;

    return a.first < b.first;
}

void solve()
{
    int n; cin >> n;

    vector<pair<int, int>> v;

    REP(i, 0, n)
    {
        int o, p; cin >> o >> p;

        v.push_back(make_pair(i + 1, o + p));
    }

    sort(v.begin(), v.end(), comparator);

    for (auto it = v.begin(); it != v.end(); ++it)
        cout << it->first << " ";
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
