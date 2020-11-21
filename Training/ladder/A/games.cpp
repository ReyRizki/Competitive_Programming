#include <bits/stdc++.h>

#define REP(i, a, b) for (auto i = (a); i < (b); i++)
#define REPR(i, a, b) for (auto i = (a - 1); i >= (b); i--)

using namespace std;

int rotateMin(int current, int target)
{
    if (current > target)
        swap(target, current);

    return min(target - current, current - target + 26);
}

void solve()
{
    int n; cin >> n;

    vector<pair<int, int>> v;

    REP(i, 0, n)
    {
        int x, y; cin >> x >> y;

        v.push_back(make_pair(x, y));
    }

    int result = 0;

    for (auto i = v.begin(); i != v.end(); ++i)
        for (auto j = v.begin(); j != v.end(); ++j)
            if (i != j)
                if (i->first == j->second)
                    result++;

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

