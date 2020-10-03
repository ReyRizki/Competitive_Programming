#include <bits/stdc++.h>

#define REP(i, a, b) for (auto i = (a); i < (b); i++)
#define REPR(i, a, b) for (auto i = (a-1); i >= (b); i--)

using namespace std;

void solve()
{
    long long int n; cin >> n;

    long long int count = 0;
    for (long long int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            if (i == n / i)
                count += ((i % 2) == 0);
            else
                count += ((i % 2) == 0) + (((n / i) % 2) == 0);
        }

    }

    cout << count << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1; cin >> t;

    while (t--)
        solve();

    return 0;
}