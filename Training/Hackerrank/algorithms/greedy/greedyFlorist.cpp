#include <bits/stdc++.h>

#define REP(i, a, b) for (auto i = (a); i < (b); i++)
#define REPR(i, a, b) for (auto i = (a - 1); i >= (b); i--)

using namespace std;

void solve()
{
    long long int n, k; cin >> n >> k;

    vector<long long int> v(n);

    REP(i, 0, n)
        cin >> v[i];

    sort(v.begin(), v.end(), greater<int>());

    long long int result = 0;

    REP(i, 0, n)
        result += ((i / k) + 1) * v[i];

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
