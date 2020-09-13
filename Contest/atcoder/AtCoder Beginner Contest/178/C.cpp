#include <bits/stdc++.h>

#define REP(i, a, b) for (auto i = (a); i < (b); i++)
#define REPR(i, a, b) for (auto i = (a-1); i >= (b); i--)

using namespace std;

void solve()
{
    long long int result = 1;
    long long int n; cin >> n;
    const long long int x = 1000000007;

    for (long long int i = 0; i < n - 2; i++)
    {
        result = (result * 9) % x;
    }

    cout << (result * n) % x << "\n";
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