#include <bits/stdc++.h>

#define REP(i, a, b) for (auto i = (a); i < (b); i++)
#define REPR(i, a, b) for (auto i = (a-1); i >= (b); i--)

using namespace std;

void solve()
{
    int n, k; cin >> n >> k;

    vector<int> v;

    REP(i, 0, n)
    {
        int x; cin >> x;

        v.push_back(x);
    }

    sort(v.begin(), v.end());

    int i = 0, result = 0;
    while ((i < n) and (k >= v[i]))
    {
        k -= v[i];
        
        result++, i++;
    }

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
