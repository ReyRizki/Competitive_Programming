#include <bits/stdc++.h>

#define REP(i, a, b) for (auto i = (a); i < (b); i++)
#define REPR(i, a, b) for (auto i = (a - 1); i >= (b); i--)

using namespace std;

void solve()
{
    int n; cin >> n;

    vector<int> v;

    int sum1 = 0, sum2 = 0;

    REP(i, 0, n)
    {
        int x; cin >> x;

        sum1 += x;

        v.push_back(x);
    }

    sort(v.begin(), v.end());

    int result = 0;
    while ((result < n) and (sum1 >= sum2))
    {
        int target = n - result - 1;
        sum2 += v[target];
        sum1 -= v[target];
        result++;
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