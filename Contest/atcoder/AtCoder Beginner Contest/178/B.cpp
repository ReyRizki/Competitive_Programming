#include <bits/stdc++.h>

#define REP(i, a, b) for (auto i = (a); i < (b); i++)
#define REPR(i, a, b) for (auto i = (a-1); i >= (b); i--)

using namespace std;

void solve()
{
    long long int result = INT64_MIN;

    vector<long long int> v(4);
    REP(i, 0, 4)
        cin >> v[i];

    REP(i, 0, 2)
        REP(j, 2, 4)
            result = max(result, v[i] * v[j]);

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