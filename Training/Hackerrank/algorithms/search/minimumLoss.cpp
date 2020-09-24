#include <bits/stdc++.h>

#define REP(i, a, b) for (auto i = (a); i < (b); i++)
#define REPR(i, a, b) for (auto i = (a-1); i >= (b); i--)

using namespace std;

void solve()
{
    int n; cin >> n;
    
    set<long long int> s;

    long long int minLoss = INT64_MAX;
    REP(i, 0, n)
    {
        long long int x; cin >> x;

        if (s.count(x))
            minLoss = 0;
        else
        {
            auto it = s.upper_bound(x);

            if (it != s.end())
                minLoss = min(minLoss, *it - x);
        }

        s.insert(x);
    }

    cout << minLoss << "\n";
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