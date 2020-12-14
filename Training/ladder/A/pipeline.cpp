#include <bits/stdc++.h>

#define ll long long
#define REP(i, a, b) for (auto i = (a); i < (b); i++)
#define REPR(i, a, b) for (auto i = (a - 1); i >= (b); i--)

using namespace std;

ll sum(ll n)
{
    return (n * (n + 1)) / 2;
}

ll sum(ll start, ll end)
{
    if (start <= 1)
        return sum(end);
    
    return sum(end) - sum(start - 1);
}

ll minSplitters(ll n, ll k)
{
    ll start = 1, end = k;

    while (start < end)
    {
        ll mid = (start + end) / 2;
        ll s = sum(mid, k);

        if (s == n)
            return k - mid + 1;
        
        if (s > n)
            start = mid + 1;
        else
            end = mid;
    }

    return k - start + 2;
}

void solve()
{
    ll n, k; cin >> n >> k;

    if (n == 1)
    {
        cout << 0 << "\n";
        return;
    }

    if (n <= k)
    {
        cout << 1 << "\n";
        return;
    }

    k--;
    n--;

    if (sum(k) < n)
        cout << -1 << "\n";
    else
        cout << minSplitters(n, k) << "\n";
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