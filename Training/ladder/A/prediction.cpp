#include <bits/stdc++.h>

#define ull unsigned long long
#define REP(i, a, b) for (auto i = (a); i < (b); i++)
#define REPR(i, a, b) for (auto i = (a-1); i >= (b); i--)

using namespace std;

bool checkPrime(int n)
{
    if (n == 2)
      return 1;

    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return 0;
    }

    return 1;
}

int nextPrime(int n)
{
    while (1)
    {
        if (checkPrime(n))
            return n;
        n++;
    }

    return -1;
}

void solve()
{
    int n, m; cin >> n >> m;

    int next = nextPrime(n + 1);
    // cout << next << "\n";
    cout << (m == next ? "YES" : "NO") << "\n";
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
