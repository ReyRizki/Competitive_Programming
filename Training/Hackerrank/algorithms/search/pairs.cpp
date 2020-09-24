#include <bits/stdc++.h>

#define REP(i, a, b) for (auto i = (a); i < (b); i++)
#define REPR(i, a, b) for (auto i = (a-1); i >= (b); i--)

using namespace std;

void solve()
{
    int n;
    long long int k;
    cin >> n >> k;

    set<long long int> s;

    REP(i, 0, n)
    {
        long long int x; cin >> x;
        s.insert(x);
    }

    int result = 0;
    for (auto it = s.begin(); it != s.end(); ++it)
        if (s.count(*it + k))
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