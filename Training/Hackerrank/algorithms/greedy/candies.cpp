#include <bits/stdc++.h>

#define REP(i, a, b) for (auto i = (a); i < (b); i++)
#define REPR(i, a, b) for (auto i = (a - 1); i >= (b); i--)

using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<int> v(n);

    REP(i, 0, n)
    cin >> v[i];

    vector<int> c1(n, 1);
    REP(i, 0, n - 1)
        if (v[i + 1] > v[i])
            c1[i + 1] = c1[i] + 1;

    vector<int> c2(n, 1);
    REPR(i, n, 1)  
        if (v[i - 1] > v[i])
            c2[i - 1] = c2[i] + 1;

    long long int result = 0;
    REP(i, 0, n)
        result += max(c1[i], c2[i]);

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
