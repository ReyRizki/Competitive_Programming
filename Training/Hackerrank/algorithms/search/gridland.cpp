#include <bits/stdc++.h>

#define REP(i, a, b) for (auto i = (a); i < (b); i++)
#define REPR(i, a, b) for (auto i = (a-1); i >= (b); i--)

using namespace std;

bool comparator(pair<long long int, long long int> a, pair<long long int, long long int> b)
{
    return a.first < b.first;
}

long long int usedTile (vector<pair<long long int, long long int>> v)
{
    sort(v.begin(), v.end(), comparator);

    // for (auto it = v.begin(); it != v.end(); ++it)
    //     cout << it->first << " " << it->second << "\n";

    int idx = 0, n = v.size();
    REP(i, 1, n)
    {
        if (v[idx].second >= v[i].first)
        {
            v[idx].second = max(v[idx].second, v[i].second);
            v[idx].first = min(v[idx].first, v[i].first);
        }
        else
        {
            idx++;
            v[idx] = v[i];
        }
    }

    long long int result = 0;
    REP(i, 0, idx + 1)
        result += v[i].second - v[i].first + 1;

    return result;
}

void solve()
{
    map<long long int, vector<pair<long long int, long long int>>> rails;

    long long int m, n;
    int k;
    cin >> m >> n >> k;

    REP(i, 0, k)
    {
        long long int r, c1, c2;
        cin >> r >> c1 >> c2;

        rails[r].push_back(make_pair(c1, c2));
    }

    long long int sum = 0;
    for (auto it = rails.begin(); it != rails.end(); ++it)
        sum += usedTile(it->second);

    cout << m * n - sum << "\n";
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